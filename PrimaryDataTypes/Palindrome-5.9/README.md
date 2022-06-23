# Palindrome

### Problem Statement

A palindrome string is one which reads the same forwards and backwards, e.g., "redivider". In this problem, you are to write a program which determines if the decimal representation of an integer is a palindromic string. For example, your program should return true for the inputs 0, 1, 7, 11, 121, 333 and 2147447412 and false for the inputs -1, 12, 100, and 2147483647.

Write a program that takes an integer and determines if that integer's representation as a decimal string is a palindrome.

### Brute Force Method

Steps
1. Check whether the `number` is `negative` or `not`. If it is `negative` return `false`.
2. Convert the `number` to `string`
3. There are two ways to check the `palindrome` of a `string`
   a. First is to create another `string` which is the `reverse` form of the `number` `string`
   b. Second is to create method that checks the `palindrome` of `string`
4. If `false` is not `returned`, then `return` `true`.

### Better Approach

Steps to find digit at a particular position

1. Declare `digitMask` which is initialized to value 10<sup>location</sup>.
2. Return `(inputNumber%(digitMask*10))/digitMask`.

Steps
1. Check whether the `number` is negative or not. If it is `negative` return false.
2. Create a new variable `nosOfDigit` which is initialized to value `log10(inputNumber) + 1`.
3. Perform for loop from `i = 0` till condition `i < nosOfDigits` is satisfied. Following steps are to be performed in the loop
   a. Check whether the `msb` `bit` of the `number` is not equal to `lsb` of the `number`.
   b. If it `is not equal` return `false`.
   c. `Decrement` the value of `nosOfDigits`
4. Return `True`

### Book Approach

Steps
1. Check whether the `number` is `negative` or not. If it is `negative` return `false`.
2. Create a new variable `nosOfDigit` which is initialized to value `log10(inputNumber) + 1`. Also create a `msbMask` which is initialized to value 10<sup>(nosOfDigit - 1)</sup>
3. Run the for loop with `i` initialized to `0` and `condition` is that `i < nosOfDigit/2`. In every for loop perform the following steps
   a. Check whether `inputNumber/msbMask` is not equal to `inputNumber % 10`.
   b. If it `is not equal` return `false`
   c. Assign `InputNumber` with the value `inputNumber%msbMask`.
   d. Assign `InputNumber` with the value `inputNumber/10`.
   e. Assing `msbMask` with the value `msbMask/100`.
4. Return `true`.   