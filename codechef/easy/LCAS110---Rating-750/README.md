# LCAS110 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Reverse a Number

Write a C program that takes an integer as input and prints its reverse. Use a while loop for the reversal process.

### Sample 1:
Input
Output

```
12345
```

```
54321
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-14T19:47:54.400Z  

```c_cpp
#include <stdio.h>

int main() {
	int n, i, d, rev=0;
	
	scanf("%d", &n);
	while(n>0)
	{
	    d = n%10;
	    rev = rev*10 + d;
	    n = n/10;
	}
	printf("%d", rev);

}


```

---

[View on CodeChef](https://www.codechef.com/problems/LCAS110)