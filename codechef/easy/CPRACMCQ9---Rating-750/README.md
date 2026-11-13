# CPRACMCQ9 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Identifying Oneful Pairs - MCQ

Chef defines a pair of positive integers $(a, b)$ to be a $\text{Oneful Pair}$, if

$a + b + (a \cdot b) = 111$

For example, $(1, 55)$ is a $\text{Oneful Pair}$, since $1 + 55 + (1 \cdot 55) = 56 + 55 = 111$.
But $(1, 56)$ is not a $\text{Oneful Pair}$, since $1 + 56 + (1 \cdot 56) = 57 + 56 = 113 \neq 111$.

Which of these pairs are $\text{Oneful Pair}$?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-13T11:51:19.267Z  

```cpp
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x>=1 && x<=100 && y>=1 && y<=100)
    
    {
        if(x>=2*y)
        printf("Yes");
        else
        printf("No");
    }
    return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPRACMCQ9)