#include <stdio.h>

int main() {
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    for (; x<100; x+=2)
    {
        printf("%d\n", x);
    }

    if (x % 2 ==0)
    {
        printf("x is even\n");
    }
    else
    {
        printf("x is odd\n");
    }
    
    return 0;
}   