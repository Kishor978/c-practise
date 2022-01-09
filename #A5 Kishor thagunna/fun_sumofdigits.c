#include<stdio.h>
int sum(int);
int main()
{
    int a,b;
    printf("Enter the 3 digits number :");
    scanf("%d",&a);
    b=sum(a);
    printf("The sum of digits is :%d",b);

    return 0;
}
int sum(int b)
{
    int c,d,e,f;
    c=b%100;
    f=c%10;
    d=c/10;
    e=b/100;
    return (f+d+e);
}