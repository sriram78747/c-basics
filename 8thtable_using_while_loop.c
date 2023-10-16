#include <stdio.h>

int main() 
{
    int n , i = 1;
    printf("enter any number");
    scanf("%d",&n);
    while (i <= 20) 
	{
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}
 
