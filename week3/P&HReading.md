# Section 2.1 - Introduction

- The words of a computer's language are called _instructions_, and its vocabulary is called an _instruction set_.
- Computer languages are more akin to regional dialects than totally different languages.
- We're mostly looking at the MIPS instruction set, but we look a bit at the ARMv7, ARMv8 and x86 instruction sets.
- Instruction sets are all similar because computers are constructed from hardware technologies based on similar underlying principles.
- The goal of this chapter is to teach an instruction set that shows how its related to the hardware and also to a higher level programming languages.
- By learning how to represent instructions, you will also discover the secret of computing: the _stored-program concept_, which is the idea that instructions and data can be stored in memory as numbers.

# Section 2.2 - Operations of the Computer Hardware

- Every computer must be able to perform arithmetic and in MIPS we do it like so:
  `add a, b, c`
  This instructs a computer to add the two variables b and c and put the sum into a.
- The notation is rigid in that each MIPS instruction performs only one operation and must always have 3 variables.
- Suppose we want to place the sum of four variables b, c, d and e into variable a, which you'd do like so:

```asm
  add a, b, c # a = b + c
  add a, a, d # a = a + d
  add a, a, e # a = a + e
```

- Thus it takes three instructions to sum up these four variables.
- All MIPS instructions have three operations, and they're pretty simple? There's a few categories of arithmetic, loading and storing, logical operations and jumps.

**Design Principle #1: Simplicity favours regularity**
Here's two examples of C code and then assembly code:

```c
  a = b + c;
  d = a - e;
```

The translation from C to MIPS is performed by the compiler. The MIPS code would look something like this:

```asm
add a, b, c
sub d, a, e
```

```c
f = (g + h) - (i + j);
```

For this, the compiler must break the statement into several instructions

```asm
add t0, g, h # temp variable t0 contains g + h
add t1, i, j # temp variable t1 contains i + j
sub f, t0, t1 # f gets result of t0 - t1
```

# Section 2.3 - Operands of the Computer Hardware

- With assembly, you're restricted to what you can do because you can only store results in special hardware locations called registers.
- The size of a register in MIPS is 32 bits, groups of 32 bits occur so frequently they are given the name **word** in the MIPS architecture.
- We have 32 registers because of our second principle

**Design Principle #2: Smaller is faster**

- A very large number of registers may increase the clock cycle time simply because it takes electronic signals longer when they must travel farther.
- The MIPS convention is to use two character names after a dollar sign to represent a register.
- This means the above code looks like this:

```asm
add $t0, $s1, $s2 # temp variable t0 contains g + h
add $t1, $s3, $s4 # temp variable t1 contains i + j
sub $s0, $t0, $t1 # f gets result of t0 - t1
```

## Memory Operands

- The processor can keep only a small amount of data in registers, but computer memory contains billions of data elements, making it perfect for data structures like arrays and structures to be held in memory.
- MIPS therefore must contain instructions to transfer data between memory and registers. These instructions are called **data transfer instructions**. To access a word in memory, the instruction must supply the memory address. Memory is just a large, single dimensional.
- The data transfer instruction that copies data from memory to a register is called a load. For example:

```c
g = h + A[8];
```

\$s3 is the starting address of the array.

```asm
lw $t0, 8($s3) # temp reg $t0 gets A[8]
add $s1, $s2, $t0 # g = h + A[8];
```

- We multiply the starting address by the offset (8) to get the 8th position (i think).
