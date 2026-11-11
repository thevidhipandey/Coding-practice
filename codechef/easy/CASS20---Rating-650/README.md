# CASS20 - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### BMI Calculator

Given the height (1.82 meter) and weight (72 kg) of the Chef, calculate his BMI (Body Mass Index).

Formula to calculate the BMI:

### Sample 1:
Input
Output

```
 
```

```
21.736506
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T13:42:01.046Z  

```c_cpp
#include <stdio.h>

int main() {
    float height = 1.82;
    float weight = 72;
    float BMI = weight/(height*height);
    printf("%f", BMI);
    
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CASS20)