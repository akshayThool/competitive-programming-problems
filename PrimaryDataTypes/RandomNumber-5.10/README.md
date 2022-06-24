# Random Number Generator

### Problem Statement

How would you implement a random number generator that generates a random integer i between a and b, inclusive, given random number generator that produces 0 or 1 with equal probability ? All values in [a, b] should be equally likely.

### Random Number Generator

Steps
1. Declare range variable which is initialized to value upperBound - lowerBound + 1. And also declare result variable.
2. Perform do while loop, with while loop's condition as result >= range.
3. Inside do - perform the following steps
   a. Perform for loop with i initialized with value 0 and condition to be (1 << i) < range. 
   b. Assign result with value (result << 1) | randomNumber();
4. Return result + lowerBound
