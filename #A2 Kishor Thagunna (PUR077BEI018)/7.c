#include<stdio.h>
#include<conio.h>
 void main()

 {
     int a,b,r;
     char c;
    printf("Enter two numbers:\n"); 
    scanf("%d%d",&a,&b); 
    printf("Enter arithematic operator\n"); 
    scanf(" %c",&c); 
     if (c=='*') 
     { 
        r= a * b; 
    } 
    else if (c=='/') 
    { 
        r = a / b; 
    } 
    else if (c=='+') 
    { 
        r = a + b; 
    } 
    else if (c=='-')
 { 
        r = a - b;
 } 
    else if (c=='%')  { 
        r = a % b; 
 } 

     
     
     printf("%d%c%d is %d",a,c,b,r); 
     getch();
 }
