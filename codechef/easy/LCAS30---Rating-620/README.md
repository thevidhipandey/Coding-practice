# LCAS30 - Rating 620

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Temperature Converter

Write a C program that converts a temperature in Celsius to Fahrenheit. The Celsius temperature should be stored in a float variable celsius, and the Fahrenheit equivalent should be printed using a single printf statement. The relation between the two scales is given as

```
fahrenheit = (celsius * 9/5) + 32;

```

Take the celsius temperature to be 20.5.

### Sample 1:
Input
Output

```
 
```

```
68.900002
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T12:14:15.646Z  

```c_cpp
#include <stdio.h>

int main() {
    float celsius = 20.5;
    float farenheit = (20.5*9/5)+32;
    printf("%f", farenheit);
    return 0;

}


```

---

[View on CodeChef](https://www.codechef.com/problems/LCAS30)