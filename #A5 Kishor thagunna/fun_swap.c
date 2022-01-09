#include<stdio.h>
int swap(int);
int main()
{
    int a,b;
    printf("Enter the two digit number :");
    scanf("%d",&a);
    b=swap(a);
    printf("The swaped number is :%d",b);
    return 0;
}
int swap(int c)
{
    int d,e;
    d= c%10;
    e= c/10;
    return((d*10)+e);
}
