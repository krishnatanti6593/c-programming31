#include <stdio.h>
int sum(void);
int sub(void);
int mul(void);
int div(void);
int sum(void)
{
    int a, b;
    printf("enter the first number : ");
    scanf("%d", &a);
    printf("enter the second number : ");
    scanf("%d", &b);
    int total = a + b;
    return total;
}
int sub(void)
{
    int a, b;
    printf("enter the first number : ");
    scanf("%d", &a);
    printf("enter the second number : ");
    scanf("%d", &b);
    int result = a - b;
    return result;
}
int mul(void)
{
    int a, b;
    printf("enter the first number : ");
    scanf("%d", &a);
    printf("enter the second number : ");
    scanf("%d", &b);
    int value = a * b;
    return value;
}
int div(void){
    int a, b;
    printf("enter the first number : ");
    scanf("%d", &a);
    printf("enter the second number : ");
    scanf("%d", &b);
    int value;
    if(b!=0){
         value = a/b;
    }
    else{
        printf("not divisble");
    }

    return value;
   
}

int main()
{
    printf("====STUDENT CALCULATOR====\n");
    printf("\n");
    printf("choose operation: \n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("\n");

    while (1)
    {

        int choice;
        printf("\nenter the choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:{

            int total = sum();
            printf("result  = %d", total);
            break;
        }

        case 2:{
            int result = sub();
            printf("result = %d\n", result);
            break;
        }

        case 3:{
            int value = mul();
            printf("result  = %d\n", value);
            break;
        }
        case 4:{
        int di=div();
        printf("result = %d\n", di);
        break;
        }
        default:
            printf("invalid input\n");
        }
    }
    return 0;
}
