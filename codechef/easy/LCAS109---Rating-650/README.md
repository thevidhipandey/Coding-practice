# LCAS109 - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Even Sum

Write a C program that calculates and prints the sum of all even numbers from 1 to a given positive integer n. Use a while loop to iterate through the numbers.

### Sample 1:
Input
Output

```
6
```

```
12
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-14T19:45:46.236Z  

```c_cpp
#include <stdio.h>

int main() {
	int i=2, n, sum=0;
	scanf("%d", &n);
	
	while(i<=n)
	{
	    sum += i;
	    i+=2;
	}
	printf("%d", sum);

}


```

---

[View on CodeChef](https://www.codechef.com/problems/LCAS109)