#include <stdio.h>
int hcf(int,int);
int main()
{
    int num1, num2,h;
    printf("Enter the two numbers:");
    scanf("%d%d", &num1, &num2);
    h=hcf(num1,num2);
    printf("\nHCF of(%d,%d)=%d", num1, num2,h);
    return 0;
}

int hcf(int a,int b)
{

    int i,j;
    for(i=1;i<a+1;i++)
        if(a%i==0)
        if(b%i==0)
        j=i;
    return j;
}
