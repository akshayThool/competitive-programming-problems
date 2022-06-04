## Parity Check

### Problem Statement
Parity of a binary word is 1 if the number of 1s in the word is odd; otherwise, it is 0.
Example of 64 bit number is 595056260442243600 whose binary format is 100001000010000100001000010000100001000010000100001000010000

### Brute Force Method
In this method, every bit of the word is compared and result is returned. A bitmask of 1 is AND with the number, the result represents 1 bit present at 0th position. After the calculation the number is right shifted by 1.
