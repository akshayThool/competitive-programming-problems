# Multiplication
## Problem Statement
Sometimes the processors used in ultra low-power devices such as hearing aids do not have dedicated hardware for performing multiplication. A program that needs to perform multiplication must do so explicitly using lower-level primitives.

Write a program that multiplies two nonnegative integers. The only operators you are allowed to use are 
> assignment,
> the bitwise operators >, <, |, &, -, ^ and
> equality checks and Boolean combination thereof.

You may use loops and function that you write yourself. These constraints imply, for example, that you cannot use increment or decrement, or test if x < y.
_Hint_: Add using bitwise operations, multiply using shift-and-add.

### Bitwise Add
Let's first take a look at how addition takes place at the binary level and understand it before trying to do it with bitwise operators

| carry | 0 | 0 | 1 | 1 | 0 | 0 | 0 | 0 |
| a = 25 | 0 | 0 | 0 | 1 | 1 | 0 | 0 | 1 |
| b = 14 | 0 | 0 | 1 | 0 | 1 | 1 | 1 | 0 |
| sum = 39 | 0 | 0 | 1 | 0 | 0 | 1 | 1 | 1 |

Understanding truth table for addition

| A | B | carry | sum |
|----|----|----|----|
| 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 0 |

That means for calculating carry one should use XOR operator and for finding carry AND operator.
