#include<stdio.h>
 
#include<conio.h>

void main()
{
    int i,j,f;
    for(i=2;i<=500;i++)
    {
        for(j=2;j<i;j++)
        {
            f=0;
            if(i%j==0)
            {
                f=1;
                break;
            }
            
        }
        if(f==0)
        printf("\n%d",i);
    }
   
    getch();
}
