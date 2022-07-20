# Remove Duplicates

### Problem Statement

Write a program which takes as input a sorted Array and updates it so that all duplicates have been removed and the remaining elements have been shifted left to fill the emptied indices. Return the number of valid elements. Many languages have library functions to perform this operation - you cannot use these functions.

### O(n) Space Complexity Solution

Steps
1. Create another vector of input vector size and all the numbers in the vector has to be initialized with the value of zero
2. Loop through the input vector, if A[i] != A[i-1], then Acopy.pushBack(A[j++])
3. Return the Acopy vector.

### O(1) Space Complexity Solution
