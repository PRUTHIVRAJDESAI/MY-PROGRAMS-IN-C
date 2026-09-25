#include <stdio.h>
int main() {

    int i, n, j, k, d;
    char ch;
    d = 0;

    // printf("Enter type of pattern 1.normal, 2.inverted, 3.hollow and 4.inverted hollow");
    // scanf("%c", &ch);
    printf("Enter the number of rows needed: ");
    scanf("%d", &n);

    //normal pattern
    // for(i = 1;i <= n; i++ ) {
    //     for(j = 1; j <= i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //inverted pattern
    for(i = 1; i <= n; i++) {
        for(k = 1; k < i; k++) {
            printf(" ");
        }
        for(j = 1; j <= n-d; j++) {
            printf("* ");
        }
        d = d + 1;
        printf("\n");
    }
    return 0;
}