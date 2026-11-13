#include<stdio.h>
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("a= %d\n b=%d",*p,*q);
    return;



}
int main(){
    int a,b;
    printf("enter the number a = ");
    scanf("%d",&a);
    printf("enter the number b = ");
    scanf("%d",&b);
    swap(&a,&b);
    return 0;
}
