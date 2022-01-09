#include<stdio.h>
int main()
{
     
     int a,b,c;

     printf("Enter value of A:");
     scanf("%d",&a);
     printf("Enter value of B:");
     scanf("%d",&b);
     printf("Enter value of C:");
    scanf("%d",&c);

    if(a>b)
    {
        if (a>c)
        
            printf("A is greatest.");
        else
            printf("C is greatest.");
    }
     else
     {
         if(b>c)
            printf("B is greatest.");
        else
            printf("A is greatest.");
     }

     return 0;

}