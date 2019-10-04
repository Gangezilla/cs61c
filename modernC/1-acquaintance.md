## Buckle up :grimacing:

- This chapter focuses mostly on unsigned integers
- Pointers in steps
- Focus on arrays over pointers instead.

- Bind type modifiers and qualifiers to the left `char* name;`
- Use array notation for pointer parameters
- We use function notation for function pointer parameters.

## Control Flow
### Conditional Execution
- C has if statements as you know and love:
```c
if (i > 25) {
  j = i - 25;
}
```
- Here, `i > 25` is known as the _controlling expression_, and the part in the brackets is the _dependent block_
- You can also combine it with an `else` statement too.
- You can combine `if`s and `for`s too.
- In C, the value 0 represents logical false. It, and NULL are the only false values. Everything else is logical true.
- `!=` and `==` let us test for equality and inequality respectively.
- Don't compare directly to 0, false, or true. Use the equality and inequality operators because it makes your code clearer and easier to understand.

### **Iterations**
- The `for` statement lets us iterate over a domain.
- You've also got `do` and `while` statements. A while loop is as we know and love, but a `do while` loop looks like this:
```c
  do {
    blah blah
  } while (condition);
```
- This means if the condition is false, a while loop won't run its block at all, and a do loop will run it once. This is because the condition gets checked afterwards.
- You can also break out of a loop with `break`, and you can use `continue` to start the loop again, skipping everything else that comes afterwards.
- You've also got `else if` and `switch` statements as well.

## Expressing computations
- The type `size_t` represents values in the range [0, SIZE_MAX]. SIZE_MAX is quite large, and varies based on the platform. On a 64 bit system its a very very large number.
- Symbols and combinations like `+` and `!=` are called operators, and the things that they're applied to are called operands.
- Unsigned arithmetic is always well defined, that is, regardless of the values we feed into an operation, our computation will always have a valid result as long as it's withing the range [0, SIZE_MAX].

 Up to Page 31
