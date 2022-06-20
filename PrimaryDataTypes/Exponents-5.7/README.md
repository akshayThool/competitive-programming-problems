# Exponents

### Problem Statement

Write a program that takes double x and an integer y and returns x<sup>y</sup>. You can ignore overflow and underflow.

### Brute Force Method 

A simple for loop multiplies `result` variable with the value of `number`, `exponent` times.

### Better Approach

A Better approach will be to reduce the number of multiplications.
Steps
1. Declare a variable `result` which is initialized with the value of `one`.
2. Perform `while` loop as long as `exponent` is not `zero`.
3. In every `while` loop perform the following
    a. If `exponent` is `odd`, then `multiply` the value of `result` with the value of `number`.
    b. Multiply the value of `number` with itself.
    c. Perform `left shift` operation of `exponent`.
4. Return the variable `result.`