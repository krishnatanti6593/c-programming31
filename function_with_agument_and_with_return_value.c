#include<stdio.h>
int cube(int a);
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int result= cube(a);
    printf("cube = %d ",result);
    return 0;
}
int cube(int a){
    int total;
    total=a*a*a;
    return total;
}