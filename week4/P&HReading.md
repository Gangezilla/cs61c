# 2.5 - Representing Instructions in the Computer
- Instructions are kept in the computer as a series of high and low electronic signals and may be represented as numbers. Each piece of an instruction can be considered as an individual number and placing these side by side forms the instruction.
- Since registers are referred to in instructions, there must be a convention to map register names to numbers.
- In MIPS, registers $s0 to $s7 map to registers 16 - 23, $t0 - $t7 maps to 8 - 15.
- An instruction like `add $t0, $s1, $s2` is represented in decimal as `0 17 18 8 0 32`. Each of these segments is a field. The first and last fields together tell MIPS that this instruction performs addition. The second field gives the number of the register of the first source operand, and the third gives the other one. The fourth field is the register that will receive the sum, and the fifth field is unused so is set to 0. In binary, this instruction is exactly 32 bits.
- The layout of the instruction is called the **instruction format**. All the bits above add up to 32 bits, like all MIPS instructions.
- We call these bits **machine language** to differentiate it from assembly language. We convert these to hex to make it easier to read and interpret.
- We convert between the two by just, like, looking at each individual part of it and converting it.
- MIPS fields are all given names to make them easier to discuss.
**Design Principle 3:** Good design demands compromises
- In order to keep all the instructions 32 bits, some of the instructions use different bit amounts for their individual fields.

# 2.10

# 2.12

# A.1 - A.4
