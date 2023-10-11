#include<stdio.h>
int main()
{
	int s,area,perimeter;
    scanf("%d",&s);
	area=s*s;
	perimeter=4*s;
	printf("Area of a square with side %d is: %d\n",s,area);
	printf("Perimeter of a square with side %d is: %d",s,perimeter);	
}
