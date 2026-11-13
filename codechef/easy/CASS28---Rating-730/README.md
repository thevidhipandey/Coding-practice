# CASS28 - Rating 730

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Triangle Type

Take the sides of a triangle as user inputs and find if the triangle is equilateral, isosceles, or scalene.

 **Note:** 
 *Equilateral Triangle:*  If all three sides of the triangle are equal, it is an equilateral triangle.
 *Isosceles Triangle:*  If at least two sides of the triangle are equal, it is an isosceles triangle.
 *Scalene Triangle:*  If all three sides of the triangle are different, it is a scalene triangle.

### Input Format
- The only line of input will contain three space separated numbers - The sides of a triangle.
### Output Format
- Output on a single line: Equilateral, if the triangle is equilateral. Isosceles, if the triangle is isosceles. Scalene, if the triangle is scalene.
### Constraints
- All sides are positive integers and $\leq 100$
### Sample 1:
Input
Output

```
2 3 2
```

```
Isosceles
```

### Sample 2:
Input
Output

```
3 4 5
```

```
Scalene
```

### Sample 3:
Input
Output

```
4 4 4
```

```
Equilateral
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-13T11:41:21.944Z  

```c_cpp
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b==c)
    printf("Equilateral");
    else if(a==b || b==c || a==c)
    printf("Isosceles");
    else
    printf("Scalene");

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CASS28)