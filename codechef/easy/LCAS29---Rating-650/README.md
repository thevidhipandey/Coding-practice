# LCAS29 - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Variable Swap Challenge

Write a C program that swaps the values of two integer variables, a =5 and b = 10, and prints their new values using a single printf statement with a space between them

### Sample 1:
Input
Output

```
 
```

```
10 5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T11:56:11.592Z  

```c_cpp
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int c;
    c=a+b;
    a=c-a;
    b=c-b;
    printf("%d %d", a, b);
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCAS29)