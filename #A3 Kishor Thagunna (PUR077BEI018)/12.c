#include<stdio.h>
 
#include<conio.h>

int main(){
    int i,n,factorial=1;

    printf("Enter the number :");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial does not exists");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            factorial*=i;
        }

    printf("The factorial of %d is %d\n",n,factorial);
    }
    
    getch();
}   