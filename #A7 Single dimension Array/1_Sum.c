// 1. WAP to read 10 elements in an array and calculate the sum and average of all elements.
#include<stdio.h>
 
int main(){
    float a[10],s=0,av;
    for(int i=0;i<10;i++)
    {                                               
        printf("Enter the number:");
        scanf("%f",&a[i]);
        s=s+a[i];
        av=s/10;
    }
    printf("The sum and average are %f and %f.",s,av);
    return 0;
}