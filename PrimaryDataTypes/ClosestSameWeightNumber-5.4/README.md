# Closest Same Weight Number
## Problem Statement
Define Weight of a non-negative integer as number of high bits in binary format i.e weight of 92 in base-2 (1011100)<sub>2</sub> is 4.

## Get Weight Method
1. Declare a weight count variable
2. Perform while loop as long as number is not zero
3. In every while loop, perform two operations, first is increment the count variable and then remove the lowest bit from the number.
4. Return back the count variable

## Brute Force Method
1. Calculate the nosOfBits required for the number
2. Using the nosOfBits, calculate the maxDifference variable, which is 2<sup>nosOfBits</sup>
3. Perform For loop from i = 1 to maxDifference
4. In every loop, check whether the weight of the number is equal to the weight of (number + i) or (number + i). If it is equal return the value i.e either (number + i) or (number - i)
## Optimized Method - O(n)
1. Initialize the variable nosOfBits with the number of bits of the number
2. Run the for loop from i = 0 to nosOfBits.
3. In every step of for loop, check whether the bit at position at i and i+1 is same or different
4. If it is different, then swap the bit at i and i+1 position and return the number
## O(LogN) Method
1. In order to get log(n) solution, we first need to create two functions, one is to find trailing zeros and another one is trailing ones. Both of this functions will take order of log(n).
2. If the trailing zero number more than 0, then return the number in the format (number ^ (number & -number) ^ (1ULL << (c-1)))
3. If the trailing zero is 0, then calculate trailingOnes, then return the number in form (number ^ (1ULL << c) ^ (1ULL << (c - 1)))
