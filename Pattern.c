#include <stdio.h>
int main() {

    int i, n, j, k, d;
    char ch;
    d = 0;

    printf("Enter type of pattern: 1.right angled triangle, 2.inverted right angled triangle, 3.normal triangle, 4.inverted normal triangle, 5.square: ");
    scanf(" %c", &ch);
    printf("Enter the number of rows needed: ");
    scanf("%d", &n);

    switch(ch) {
        //right angled pattern
        case '1':
        for(i = 1;i <= n; i++ ) {
            for(j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

        //inverted right angled triangle pattern
        case '2':
        for(i = 1; i <= n; i++) {
            for(k = 1; k < i; k++) {
                printf("  ");
            }
            for(j = 1; j <= n-d; j++) {
                printf("* ");
            }
            d = d + 1;
            printf("\n");
        }
        break;

        //normal triangle
        case '3':
        for (i = 1; i <= n; i++) {
            for(k = 1; k <= n - i; k++){
                printf(" ");
            }
            for (j = 1; j <= i; j++){
                printf("* ");
            }
            printf("\n");
        }
        break;

        //normal inverted triangle
        case '4' :
        for (i = 1; i <= n; i++) {
            for(k = 1; k < i; k++){
                printf(" ");
            }
            for (j = 1; j <= n - d; j++) {
                printf("* ");
            }
            d = d + 1;
            printf("\n");
        }
        break;

        //Square
        case '5':
        for (i = 1; i <= n; i++){
            for(j = 1; j <= n; j++) {
                printf("*  ");
            }
            printf("\n");
        }

        //Rectangle
        case '6':
        for (i = 1; i <= n; i++){
            for(j = 1; j <= n+2; j++) {
                printf("*  ");
            }
            printf("\n");
        }
    }
    
    return 0;
}