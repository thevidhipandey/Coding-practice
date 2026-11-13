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
