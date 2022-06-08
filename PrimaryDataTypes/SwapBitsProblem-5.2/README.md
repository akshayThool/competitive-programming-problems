# Swap Bits
## Problem Statement
Implement code that takes as input a 64-bit integer and swaps the bits at indices i and j

## Brute Force Method
1. Compute first the bitmask for ith and jth bit.
2. Using the bitmask, find whether they are 0 or 1.
3. If both of them are having the same bit value, then return the number back.
4. Toggle the bit value at ith and jth position using xor bitwise operator

