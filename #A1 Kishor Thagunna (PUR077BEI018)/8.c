#include<stdio.h>

int main(){

    int a,b,c,d,x,y;
    printf("Enter the value of x :");
    scanf("%d",&x);

    a=x*x*x*x*x;
    b=10*x*x*x*x;
    c=8*x*x*x;
    d=4*x;
    y=a+b+c+d;

    printf("the value of y :%d",y);

    return 0;
}