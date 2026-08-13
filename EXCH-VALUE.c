#include <stdio.h>;

int main() {

    float a, b, c;

    printf("VALUE OF a AND b:");
    scanf("%f %f", &a, &b);
    
    printf(" SELECTED VALUE OF a AND b IS: %f %f", a, b);

    //Process of swapping the values of a and b
    c = a;   
    a = b;
    b = c;
    
    printf(" \n AFTER SWAPPING VALUE OF a AND b IS: %f %f", a, b);

    return 0;
} 