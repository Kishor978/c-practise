
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    double a,b,c,d,r1,r2;
    printf("Enter coefficients a,b and c :\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=(b*b-4*a*c);
    //condition of real and different roots
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        
        printf("The possible roots are %lf and %lf",r1,r2);
    }
    //condition for real and equal roots
    else if(d==0)
    {
        r1=r2=-b/2*a;
        printf("The possible roots are %lf and %lf",r1,r2);
    }
    //condition for imaginary roots
    else if(d<0)
    {
        r1=-b/(2*a);
        r2=sqrt(-d/(2*a));
        printf("Real part of root is %lf and imaginary part of root is %lf",r1,r2);
    }

    getc;
}