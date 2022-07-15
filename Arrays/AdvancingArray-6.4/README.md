# Advancing Through an Array

### Problem Statement

Write a program which takes an array of n integers, where A[i] denotes the maximum you can advance from inex i, and returns whether it is possible to advance to the last index starting from the beginning of the array.

### O(n) Time Complexity and O(n) Space Complexity Solution

Steps:
1. Check whether A[i] is zero or not, if it is zero then return false
2. Create checkMap vector with the same size as of the A. All the int present in the vector should be initialized to zero.
3. Assign value of A[0] to one.
4. Run for loop from i = 0 to A.size() - 1. In every for loop run the following steps
    a. Only run the below statements if checkMap[i] is one.
    b. Here there is one more for loop, which runs from j = i+1 to i+A[i], and assign checkMap values in this range to value of one.
    c. If A.back() = 1, then return true.
5. return False.    
