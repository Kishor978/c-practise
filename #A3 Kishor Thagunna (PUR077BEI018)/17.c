#include<stdio.h>
#include<conio.h>
int main()
{
    int num, rev=0, rem, temp;
    printf("Enter a Number: ");
    scanf("%d", &num);
    for(temp = num; temp>0; temp=temp/10)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
    }
    if(rev==num)
        printf("\nIt's a Palindrome Number");
    else
        printf("\nIt's not a Palindrome Number");
    getch();
    return 0;
}