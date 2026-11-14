# CASS06 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Sum of Digit

Given a positive integer $N$, find sum of its digits.

### Input Format
- The first and only line of input will contain a single integer $N$.
### Output Format
- Output on a single line: the sum of digits of $N$.
### Sample 1:
Input
Output

```
87431
```

```
23
```

### Explanation:

8 + 7 + 4 + 3 + 1 = 23

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-14T19:49:42.053Z  

```c_cpp
#include <stdio.h>

int main() {
    int n, d, sum=0;
    scanf("%d", &n);
    while(n>0)
    {
        d = n%10;
        sum = sum+d;
        n=n/10;
    }
    printf("%d", sum);
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CASS06)