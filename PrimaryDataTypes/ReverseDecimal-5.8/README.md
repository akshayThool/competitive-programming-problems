# Reverse Decimal Number

### Problem Statement

Write a program which takes an integer and returns the integer corresponding to the digits of the input written in reverse order. For example, the reverse of 42 is 24, and reverse of -314 is -413.

### Brute Force Method

For Brute Force Method we will use String Reverse Function.
Steps
1. Check whether the `inputNumber` is `negative` or not.
2. Convert the `number` to `string` variable.
3. Perform `String Reverse` operation on this `string` variable.
4. Convert the `reversed string` back to `int` value.
5. Return `-inputNumber` or `inputNumber` depending on whether the `inputNumber` received was `negative` or not.
   
### Better Approach O(n)

Steps
1. Check whether the `inputNumber` is `negative` or not.
2. Declare a `result` variable and initialize the its value to `0`.
3. Perform the following steps inn `while` loop with the condition that `inputNumber` is not `zero`.
   a. Find the `unit` digit using `inputNumber%10`.
   b. Assign the `result` variable with value `resultx10 + unitDigit`.
   c. Divide `inputNumber` by `10`.
4. Return `-inputNumber` or `inputNumber` depending on whether the `inputNumber` received was `negative` or not.
     