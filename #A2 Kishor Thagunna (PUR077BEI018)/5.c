#include<stdio.h>
#include<conio.h> 
#include<math.h> 
void main() 
{  
    float a,b,c,s,area; 
    printf("Enter three sides of a triangle:\n"); 
    scanf("%f%f%f",&a,&b,&c); 
    s=(a+b+c)/2; 
    if ( ((a+b)>c) && ((a+c)>b) && ((b+c)>a) ) 
 {
    area=sqrt(s*(s-a)*(s-b)*(s-c)); 
    printf("Area of triangle is %f",area); 

 }
 else{
    printf("Sum of two sides of a triangle must be greater than third side"); 
 } 
 getch(); 
} 
