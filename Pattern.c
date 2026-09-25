#include <stdio.h>
int main() {

    int i, n, j, k, d;
    char ch;
    d = 0;

    printf("Enter type of pattern 1.normal: ");
    scanf(" %c", &ch);
    printf("Enter the number of rows needed: ");
    scanf("%d", &n);

    switch(ch) {
    //normal pattern
    case '1':
    for(i = 1;i <= n; i++ ) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    break;

   
    }
    return 0;
}