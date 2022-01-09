#include<stdio.h>
int fact(int i);

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
   
    printf("The factorial the given number is %d",fact(n));
    return 0;
}

int fact(int i)
{ 
    int x=1,j;
    for(j=i;j>0;j--)
    x=x*j;
    
    return(x);
}
