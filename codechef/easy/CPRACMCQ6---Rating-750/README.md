# CPRACMCQ6 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Alice Happiness Condition - MCQ

Alice has scored $X$ marks in her test and Bob has scored $Y$ marks in the same test.
Alice is happy if she scored at least twice the marks of Bob’s score.
Print "Yes" is she is happy.
Other wise print nothing.

 **Option 1:** 

```
if (X >= 2 * Y) {
    printf("YES");
}

```

 **Option 2:** 

```
if (X > 2*Y) {
    printf("YES");
}

```

 **Option 3:** 

```
if (2*Y <= X) {
    printf("YES");
}

```

 **Option 4:** 

```
if (2*Y >= X) {
    printf("YES");
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-13T11:49:28.849Z  

```cpp
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if(x>=1 && x<=100 && y>=1 && y<=100)
    {
        if(x<y)
        printf("YES");
        else
        printf("NO");
    }
    return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPRACMCQ6)