# LCAS59 - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Even Or Odd

Write a C program that takes an integer as input and determines whether it is an even or odd number. Print "Even" if the number is even and "Odd" if it is odd.

### Sample 1:
Input
Output

```
 5
```

```
Odd
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T14:28:13.312Z  

```c_cpp
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if(n%2==0)
	printf("Even");
	else
	printf("Odd");
	return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/LCAS59)