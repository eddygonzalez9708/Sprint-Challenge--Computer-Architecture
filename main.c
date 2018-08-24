#include <stdio.h> 
#include <stdlib.h> 
#include "cpu.h"


/* Main */ 

int main(int argc, char *argv[]) {
    
    struct cpu cpu; 

    if (arc != 2) {
        fprintf(stderr, "Usage: main filename.\n"); 
        exit(1); 
    }

    char *filename = argv[1]; 

    cpu_init(&cpu); 
    cpu_load(&cpu, filename); 
    cpu_run(&cpu); 

    return 0; 
}   