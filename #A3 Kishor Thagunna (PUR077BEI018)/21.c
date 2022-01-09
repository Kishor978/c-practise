#include<stdio.h>
#include<conio.h>
int main()
{
    int num, orig, rev=0, rem;
    printf("Enter a Number: ");
    scanf("%d", &num);
    orig = num;
    while(num>0)
    {
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    printf("The reverse of number is%d",rev);

}