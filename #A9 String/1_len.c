//1. WAP to find the length of a given string without using a library function.


#include<stdio.h>
 
int main()
{
    char st[20];
    int i;
    printf("Enter the number :");
    gets(st);
    for (i=0;st[i]!='\0';i++);
    printf("Length of string is %d.",i);

    return 0;
}