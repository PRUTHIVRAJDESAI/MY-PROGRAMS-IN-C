//THIS PROGRAM WILL COMPARE TWO OR THREE NUMBER AND GIVE THE GREATEST AMONG ALL//
#include <stdio.h>
int main() {
int a, b, c;
printf("Enter value of a, b and c: ");
scanf("%d %d %d", &a, &b, &c);

if (a>b && a>c) {
    printf("%d is the greatest among all", a);
}
else if (b>a && b>c) {
    printf("%d is the greatest among all", b);
}
else {
    printf("%d is greatest among all", c);
}
return 0;
}