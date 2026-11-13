#include <stdio.h>

void square(int a);

int main()
{
    square(5);

    return 0;
}

void square(int a)
{
    int result = a * a;

    printf("Square = %d", result);
}