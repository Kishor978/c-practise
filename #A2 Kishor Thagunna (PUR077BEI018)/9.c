#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
    int n; 
    float c; 
     printf("Enter units consumed:"); 
    scanf("%d",&n); 
    if (n>=0 && n<=20) 
    { 
        c=n*3; 
    } 
    else if(n>=21 && n<=30) 
    { 
        c=n*7; 
    } 
    else if(n>=31 && n<=50) 
    { 
        c=n*9; 
    } 
    else if(n>=51 && n<=150) 
    { 
        c=n*10; 
    } 
    else if(n>=151 && n<=250) 
    { 
        c=n*11; 
    } 
    else if(n>=251 && n<=400) 
    { 
        c=n*12; 
    }  
    else if(n>400) 
    { 
        c=n*13; 
    } 
    printf("Your electricity bill is Rs.%f",c); 
    getch(); 
}
