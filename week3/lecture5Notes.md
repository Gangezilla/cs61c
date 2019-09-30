# Intro to MIPS - We got 12 minutes in then realised it was the wrong one...

- Last lecture, started looking at high level languages like C. Next few lectures we'll be looking at what the compiler creates as an intermediate languatge thast super close to the hardware.
- Instructions from a compiler map 1-1 to a string of bits that a computer understands, an assembler is what does this for us.
- Basic job of a CPU: execute lots of instructions. Instructions are the primitive operations that the CPU may execute.
- An instruction is a thing that a piece of hardware can do very quickly and very efficiently.
- A collection of instructions, like a vocabulary, is called the Instruction Set Architecture (ISA). These are all different for each different CPU.

## ISAs

- Early trend was to have instructions on CPUs do elaborate operations, like multiplying polynomials. This is a complex task that could be broken down quite a bit.

- RISC philosophy, Reduced Instruction Set Computing. Recognise small patterns that occur very frequently, and optimise the hardware to do this really quickly.
- Let software do complex operations by composing simpler ones. Lets you make bigger and faster things too.

## MIPS

- One of the first semiconductor companies that built a commercial RISC architecture. In this class we'll look at MIPS for it's simplicity. It's assembly is quite easy to learn.
- We're using MIPS cos it's quite simple and elegant. Used quite regularly in embedded apps, x86 is a bit too complicated and is used mostly in PCs.
- Latest ARM 64 bit is pivoting towards a MIPS instruction style.

## Assembly Variables: Registers

- Our variables are things that exist physically in hardware, registers. There's only a limited number of them.
- We only have 32 registers to work with. Everything we do has to be done within that little sandbox. This is so that we can keep the hardware simple!
- Since registers are directly in hardware, they're super fast.
