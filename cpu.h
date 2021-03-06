// A directive that allows for conditional compilation 
#ifndef _CPU_H_
#define _CPU_H_

// Holds all information about the CPU 
struct cpu {
    unsigned char pc; // Program Counter, address of the currently executing instruction
    unsigned char reg[8];  // Registers Array 
    unsigned char ram[256]; // RAM Array 
    unsigned char flag; // FLAG 
}; 

// Flags 
#define FLAG_EQ (1 << 0) 
#define FLAG_GT (1 << 1) 
#define FLAG_LT (1 << 2) 

// Other General Purpose Register Names 
#define SP 7 

// Arithmetic Logic Unit Operations 
enum alu_op {
    ALU_CMP 
}; 

// Arithmetic Logic Unit Operations 

#define ADD 0b10100000
#define SUB 0b10100001
#define MUL 0b10100010
#define DIV 0b10100011
#define MOD 0b10100100
#define INC 0b01100101
#define DEC 0b01100110
#define CMP 0b10100111 
#define AND 0b10101000 
#define OR  0b10101010 
#define XOR 0b10101011 
#define SHL 0b10101100 
#define SHR 0b10101101 

// Program Counter Mutators 

#define CALL 0b01010000
#define RET  0b00010001
#define INT  0b01010010 
#define IRET 0b00010011
#define JMP  0b01010100 
#define JEQ  0b01010101 
#define JNE  0b01010110 
#define JGT  0b01010111 
#define JLT  0b01011000 
#define JLE  0b01011001 
#define JGE  0b01011010 

// Other 

#define NOP  0b00000000
#define HLT  0b00000001 
#define LDI  0b10000010
#define LD   0b10000011
#define ST   0b10000100
#define PUSH 0b01000101
#define POP  0b01000110
#define PRN  0b01000111
#define PRA  0b01001000

// Function declarations

/* It is extends the visibility of variables and functions. It also means the storage for this function is allocated in another file. */ 

extern void cpu_load(struct cpu *cpu, char *filename);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif