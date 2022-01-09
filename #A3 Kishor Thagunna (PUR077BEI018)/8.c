#include<stdio.h>
 
#include<conio.h>

int main(){
    int a,b,c,n,i;
    printf("Enter the required no of terms:");
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;

    printf("Fibonacci terms:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
    }


    getch();
}