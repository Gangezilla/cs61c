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
- In addition to associating variables with registers, the compiler allocates data structures like arrays and structures to locations in memory.
- In MIPS, words must start at addresses that are multiples of 4. This is called an **alignment restriction** and many architectures have them.
- MIPS is big endian meaning we address it from the "big" side, ie left.
- The instruction complementary to load is called **store**, it ocpies data from a register to a memory, it's `sw` which stands for store word.
- Because the addresses in loads and stores are binary numbers, we can see why RAM for memory comes in binary sizes rather than decimals.

```c
A[12] = h + A[8];
```

in MIPS:

```asm
  lw $to, 32($s3) # temp reg $t0 gets A[8]
  add $t0, $s2, $t0 # temp reg $t0 gets h + A[8]
  sw $t0, 48($s3) # stores h + A[8] back into A[12]
```

- The process of putting less commonly used variables into memory is called _spilling registers_.
- Registers take less time to access and have a higher throughput than memory, it also uses less.

## Constant or Immediate Operands

- We can use `addi` to add a constant value, instead of having to pull that value from memory.

```asm
addi $s3, $s3, 4 # $s3 = $s3 + 4
```

- Operations with constants happen often, so doing it this way is faster instead of pulling this from memory.
- The constant zero has another role, which is to simplify the instruction set. For example, the move operation is just an add instruction where one operand is zero. Hence MIPS dedicates a register \$zero to be 0.

# 2.6 Logical Operations

- Operations to do bit manipulation:
  - Bit shifts, left and right shifts.
  - In MIPS its:
    - `sll` - shift left
    - `srl` - shift right
    - `and`, `andi` - logical and
    - `or`, `ori` - logical or
    - `nor` - logical not

# 2.7 Insturctions for Making Decisions

- Computers are distinguished from calculators based on their ability to make decisions.
- MIPS includes two decision making instructions. The first is `beq`, and gets used like this:
  - `beq register1, register2, L1`
  - This means go to the label L1 if the value in register 1 equals the value in register2.

# 2.8

# 2.9

# 2.10 (p111 - 113)
