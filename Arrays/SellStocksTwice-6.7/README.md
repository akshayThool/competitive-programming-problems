# Buy And Sell Twice

## Problem Statement

Write a program that computes the maximum profit that can be made by buying and selling a share at most twice. The second buy must be made after the first sale.

## O(n) Time Complexity and O(n) Space Complexity Solution

Steps

1. Create two variables minimumSoFar and maximumSoFar which are initialized with value of A.front() and A.back().
2. Create maxProfit variable with initial value as MIN_INT.
3. Create a vector of the same size of input vector, and all values initialized to 0.
4. For every index of the input vector calculate the maxProfit generated and store that value in the input vector.
5. Initialize the maxProfit vector again with the value of INT_MIN.
6. Loop throught the input vector for i = A.size() - 1 to 1, in every loop instance perform the following steps
   a. Calculate maximumSoFar which is nothing but maximum(maximumSoFar, A[i]).
   b. maxProfit = maximum(maxProfit, sellOnceProfit[i-1] + maximumSoFar - A[i]);
7. Return MaxProfit.
