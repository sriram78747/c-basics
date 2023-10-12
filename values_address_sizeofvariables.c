#include <stdio.h>

int main() 
{
    int num = 42;
    float pi = 3.14;
    char letter = 'A';

    printf("Integer: Value = %d, Address = %p, Size = %zu bytes\n", num, &num, sizeof(num));
    printf("Float:   Value = %f, Address = %p, Size = %zu bytes\n", pi, &pi, sizeof(pi));
    printf("Char:    Value = %c, Address = %p, Size = %zu bytes\n", letter, &letter, sizeof(letter));

    return 0;
}
