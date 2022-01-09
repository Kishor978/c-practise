#include <stdio.h>

int binary(int);

int main()
{
    int d;
    printf("Enter a number: ");
    scanf("%d", &d);
    printf("The binary is %d", binary(d));
    return 0;
}

int binary(int n)
{
    int  a = 1,b = 0;
    do
    {
        b = b + a * (n % 2);
        n = n / 2;
        a = a * 10;
    } 
    while (n > 0);
    return b;
}
