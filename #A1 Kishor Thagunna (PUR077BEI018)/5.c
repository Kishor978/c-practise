#include<stdio.h>

int main(){
    float l,b,a,p,A,c,r,pie;
    printf("\nlength of rectangle :");
    scanf("%f",&l);
    printf("\nBreadth of the rectangle :");
    scanf("%f",&b);
    a=l*b;
    p=2*(l+b);
    printf("\nArea of the rectangle :%2f",a);
    printf("\nPerimeter of the rectangle :%2f",p);
    printf("\nEnter the radius of circle :");
    scanf("%f",&r);
    pie=3.14;
    A=pie*r*r;
    c=2*pie*r;
    printf("\nArea of the circle :%2f",A);
    printf("\nCircumference of the circle :%2f",c);

    return 0;

}