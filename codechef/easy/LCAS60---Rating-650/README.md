# LCAS60 - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Largest of Three

Write a C program that takes three integers as input and determines the largest among them. Print the largest number.

### Sample 1:
Input
Output

```
1 2 3
```

```
Largest: 3
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T14:30:11.556Z  

```c_cpp
#include <stdio.h>

int main() {
int a, b, c;

scanf("%d %d %d", &a, &b, &c);

if(a>b && a>c)
printf("Largest: %d", a);
else if(b>c)
printf("Largest: %d", b);
else
printf("Largest: %d", c);
return 0;

}


```

---

[View on CodeChef](https://www.codechef.com/problems/LCAS60)