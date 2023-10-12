#include <stdio.h>
int main() {
    int n1, n2, s;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    s = n1;
    n1 = n2;
    n2 = s;
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}
