#include <stdio.h>
int main() {
    float a, b, c;
    char op;

    printf("Enter the equation with two numbers: ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
        case '+':
            c = a + b;
            printf("%f", c);
            break;

        case '-':
            c = a - b;
            printf("%f", c);
            break;

        case '*':
            c = a * b;
            printf("%f", c);
            break;

        case '/':
            c = a / b;
            printf("%f", c);
            break;
    }
    return 0;
}