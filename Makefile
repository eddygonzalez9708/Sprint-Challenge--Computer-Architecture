SRC=$(wildcard *.c)
HEADERS=$(wildcard *.h)
DEPS=$(SRC) $(HEADERS)

main: $(DEPS)
	gcc -Wall -Wextra -g -o $@ $(SRC)

.PHONY: clean

clean:
	rm -rf main *.dSYM
