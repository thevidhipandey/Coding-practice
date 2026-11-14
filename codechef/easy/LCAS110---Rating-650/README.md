# LCAS110 - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-14T19:45:48.373Z  

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

[View on CodeChef](https://www.codechef.com/problems/LCAS110)