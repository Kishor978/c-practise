
#include <stdio.h>

int power(int, int);

int main()
{
    int n, p, pow;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter the power :");
    scanf("%d", &p);
    pow = power(n, p);
    printf("The result is %d.", pow);
    return 0;
}

int power(int x, int y)
{
    if (y == 1)
        return x;
    else
        return x * power(x, y - 1);
}
