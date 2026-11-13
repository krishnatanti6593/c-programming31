#include <stdio.h>

int sum(void);

int main()
{
    int total = sum();

    printf("Sum = %d", total);

    return 0;
}

int sum(void)
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    int total = a + b;

    return total;
}