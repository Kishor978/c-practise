#include<stdio.h>
#include<conio.h>

void main()
{
    int n,a,b,c,s;
    printf("Enter the three digit number :");
    scanf("%d",&n);
    a=n/100;
    b=((n%100)/10);
    c=n%10;
    s=(a*a*a)+(b*b*b)+(c*c*c);
    if(n==s)
    {
        printf("%D is amstrong no.",n);
    }    
    else{
        printf("%D is not amstrong no.",n);
    }
    getch();
}
