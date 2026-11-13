#include<stdio.h>
int large(int a,int b,int c);
int main(){
    int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    printf("enter the number");
    scanf("%d",&c);
    int result= large(a,b,c);
    printf(" %d is the 2nd greatest of all 3 ",result);
    return 0;
}
int large(int a,int b,int c){
    if((a>b&&a<c)||(a<b&&a>c)){
        int total=a;
        return total;
    }
    else if((b>a&&b<c)||(b<a&&b>c)){
        int total= b;
        return total;
    }
    else{
        int total=c;
        return total;
        
    }

}