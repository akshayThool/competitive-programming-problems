# Division

### Problem Statement

Given two positive integers, compute their qoutient using only addition, subtraction and shifting operators.

### Brute Force Approach O(2<sup>k</sup> - 1)

Steps
1. Initialize a `qoutient` variable to 0.
2. Perform `while` loop with condition that `divisor <= dividend`
3. In every `while` loop, subtract the value of `divisor` from `dividend` and increment the value of `qoutient`.
4. Return the value of `qoutients`.

### A Better Approach O(n<sup>2</sup>)

Steps
1. Initialize a `qoutient` variable to 0.
2. Create a method for finding the largest `i` value such that the value `(divisor << i) <= dividend `.
3. Perform while loop with the condition `divisor <= dividend`.
4. In every loop perform following steps
    a. Get the `i` value as mentioned in step 2
    b. Subtract the value `(divisor << i )` from `dividend`.
    c. Add to `qoutient` `(1 << i)` value.
5. Return the `qoutient`


### Best Approach O(n)

Steps
1. Initialize a `qoutient` variable to 0.
2. Create two more variables `power` and `divisor_power` initialized to value `32` and `(static_cast<unsigned long long>(divisor) << power)`. 
3. Perform the while loop with condition `divisor <= dividend`.
4. For every while loop perform following steps
    a. Perform while loop with condition `divisor_power > dividend`. And in this loop decrease the value of `power` as well as left shift the `divisor_power` value.
    b. Subtract `divisor_power` from `dividend`.
    c. Add `(1 << power)` to `qoutient` value.
5. Return `qoutient`
