# Buy and Sell Stocks

## Problem Statement

Write a program that takes an array denoting the daily stock price, and returns the maximum profit that could be made by buying and then selling one share of that stock.

## O(n<sup>2</sup>) Time Complexity Solution

Steps:

1. Initialize `maxProfit` with value of `INT_MIN` and `vectorSize` with `A.size()`.
2. Loop through the vector with i = 0 to A.size()-1, and then loop through j = i to A.size()-1, in this loops perform the following steps
   a. Check whether (maxProfit < (A[j] - A[i])), if it is then assign maxProfit = (A[j] - A[i])
3. Return maxProfit

## O(n) Time Complexity Solution

Steps:

1. Initialize `maxProfit` with value of `INT_MIN`, minSoFar with value of INT_MAX and `vectorSize` with `A.size()`.
2. Loop through the vector from i = 0 to A.size() - 1.
3. At every instance of loop, perform the following steps
   a. Check whether the (minSoFar > A[i]), if it is then assign minSoFar with the value of A[i].
   b. Assign the value of maxProfit as maximum(maxProfit, A[i] - minSoFar)
4. Return the value of maxProfit.

## Solution of Variant 1 in O(n) Time Complexity

### Problem Statement

Write a program that takes an array of integers and finds the length of a longest subarray all of whose entries are equal

### Solution

Steps

1. Initialize the value of maxLength with value of zero, previousValue with value of A[0], and currentCount with the value of zero.
2. Loop through the vector with the value of i = 1 to A.size() - 1, for every instance of loop perform the following steps
   a. Check if the currentValue of A[i] == previousValue, if it is then assign the value of maxLength as maximum(maxLength, ++currentCount)
   b. Else - assign previousValue as A[i], and reassign the value to currentCount as 1.
3. Return the maxLength value.
