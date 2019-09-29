# Pointers & Arrays

- A pointer is a variable that contains the address of a variable. They're used in C heaps because they're sometimes the only way to express a computation and because they lead to more compact code.
- Pointers can create awful code, but with discipline can be used to achieve clarity and simplicity.

## Pointers and Addresses

- A typical machine has an array of consecutively numbered or addressed memory cells that may be manipulated indivudally or in groups.
- The unary operator, `&` gives the address of an object. So the statement `p = &c;` assigns the address of c to the variable p, and p now points to c.
- The operator `*` is the dereferencing operator, and when its applied to a pointer it accesses the object the pointer points to.
- So we use `&` to define a pointer, and `*` to get the value from a pointer.
- The declaration of a pointer, `int *ip` is intended as a mnemonic to help you remember that `*ip` is pointer to an int.
- Since pointers are variables, they can be used without dereferencing. Like, if iq is another pointer to int, `iq = ip`, copies the contents of ip into iq making iq point to whatever ip pointed to.

## Pointers and Function Arguments

- Since C passes arguments to a function by value, there's no direct way for the the called function to alter a variable in the calling function.
- For example, if you're writing a function to swap the values of two variables, doing this without pointers wouldn't work as you'd only be swapping copies. Thus, you'd need pointers for this to work.
- Pointer argumnets enable a function to access and change objects in the function that called it.

## Pointers and Arrays

- In C, there is a strong relationship between pointers and arrays. They're so similar they should be discussed together. Generally any operation that you'd achieve with array subscripts can be done with pointers. It'll be faster, but might look more complicated.
- The declaration `int a[10];` defines an array, a, of size 10. That is, a block of 10 consecutive objects.
- If a pointer points to a[0], then `pa + 1` points to the next element. So yeah, you can add to a pointer and then it'll just point to whatever the next object in memory is now.

## Address Arithmetic
