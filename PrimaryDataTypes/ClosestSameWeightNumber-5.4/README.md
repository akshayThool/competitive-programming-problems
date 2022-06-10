# Closest Same Weight Number
## Problem Statement
Define Weight of a non-negative integer as number of high bits in binary format i.e weight of 92 in base-2 (1011100)<sup>2</sup> is 4.

## Get Weight Method
1. Declare a weight count variable
2. Perform while loop as long as number is not zero
3. In every while loop, perform two operations, first is increment the count variable and then remove the lowest bit from the number.
4. Return back the count variable

## Brute Force Method
1. Calculate the nosOfBits required for the number
2. Using the nosOfBits, calculate the maxDifference variable, which is 2<sub>nosOfBits</sub>
3. Perform For loop from i = 1 to maxDifference
4. In every loop, check whether the weight of the number is equal to the weight of (number + i) or (number + i). If it is equal return the value i.e either (number + i) or (number - i)
## Optimized Method

## O(1) Method
