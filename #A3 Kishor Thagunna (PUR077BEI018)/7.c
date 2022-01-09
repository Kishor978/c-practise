#include<stdio.h>
 
#include<conio.h>

void main(){
    int n,d1,d3,d2,sum=0;
    int i;
    for(i=100;i<=500;i++)
    {
        n=i;
        d1= i%10;
        n=n/10;
        d2=n%10;
        d3=n/10;
        sum=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
        if(sum==i)
            printf("%d\n",i);
    }
    
    getch();
}