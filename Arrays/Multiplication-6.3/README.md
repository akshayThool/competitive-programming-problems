# Multiplication using Array

### Problem Statement

Write a program that takes two array representing integers, and returns an integer representing their product. For example, since 193707721 x -761838257287 = -147573952589676412927, if the inputs are {1, 9, 3, 7, 0, 7, 7, 2, 1} and {-7, 6, 1, 8, 3, 8, 2, 5, 7, 2, 8, 7}, your function should return {-1, 4, 7, 5, 7, 3, 9, 5, 2, 5, 8, 9, 6, 7, 6, 4, 1, 2, 9, 2, 7}

### Simple Method (But not feasiable for large numbers)

In this method we simply convert the numbers represented by the array into long type, and then multiply the numbers, get the result and convert result into array again.

### Book Method

Steps
1. Calculate the sign of the result, i.e if both the numbers have same sign then return positve 1, else return negative -1.
2. Create a new vector result whose size is num1.size() + num2.size(), and all the elements inside is filled with zero values.
3. Convert the first element of the array into positive numbers.
4. Run for loop ranging from i = num1.size() - 1 to 0.
5. Run for loop ranging from j = num2.size() - 1 to 0.
6. In every loop run the following steps
   a. result[i+j+1] =result[i+j+1] + num1[i] * num2[j]
   b. result[i+j] = result[i+j] + result[i+j+1]/10
   c. result[i+j+1] = result[i+j+1]%10
7. Check whether there are any leading zeroes, if there are any, then create another vector excluding the zero values
8. If result vector is empty return {0}
9. Assign sign to the first element of the vector.
10. Return the result vector.

