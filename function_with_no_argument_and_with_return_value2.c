#include<stdio.h>
int sq(void);
int main(){
    int square=sq();
    printf("square is %d",square);
    return 0;
}
int sq(void){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int square=a*a;
    return square;
}