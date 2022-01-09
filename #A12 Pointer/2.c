// 2.WAP to read 10 elements in an array and count the occurence of odd and even.

#include<stdio.h>
 
int main(){
    int a[10],odd=0,even=0,i;
    for(i=0;i<10;i++)
    {
        printf("Enter the numbber :");
        scanf("%d",(a+i));
        (*(a+i)%2==0)? even++: odd++; 
    }
    printf("The no. of even numbers are %d and odd numbers are %d.",even,odd);
    return 0;
}