#include<stdio.h>
#include<stdlib.h>
int main() {

    int x;
    int M = rand();

    printf("Enter your guess numder: ");
    scanf("%d", &x);

    if (M == x){
        printf("**CORRECT**");
    }
    else if (x > M){
        printf("**WRONG**\nToo high");
    }
    else{
        printf("**WRONG**\n Too low\n");
    }

    printf("The number was %d", M);

    return 0;
}