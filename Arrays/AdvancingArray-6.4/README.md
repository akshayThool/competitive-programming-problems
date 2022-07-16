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

### O(n) Time Complexity and O(1) Space Complexity Solution

Steps:
1. Create new variable called max_reach, and assign value of zero to it. It represents that the maximum index that this variable can reach is zero.
2. Initialize another variable called last_index, which is nothing but A.size() - 1.
3. Loop through the vector, as long as i <= max_reach and max_reach < last_index. And do the following in every loop
    a. Find the max_reach from this given index which is represented by i i.e max_reach = maximum(max_reach, A[i] + i).
4. If max_reach >= last_Index, then return true, else return false.
