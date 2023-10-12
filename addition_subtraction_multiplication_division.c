#include <stdio.h>
int main()
 {
    int num1; 
    int num2;
    printf("Enter numbers :");
	scanf("%d%d",&num1,&num2); 

    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    int difference = num1 - num2;
    printf("Difference: %d\n", difference);

    int product = num1 * num2;
    printf("Product: %d\n", product);

    if (num2 != 0) {
        float quotient = (float)num1 / num2; 
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
