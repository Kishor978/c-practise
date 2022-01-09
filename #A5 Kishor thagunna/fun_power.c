#include <stdio.h>
int power(int, int);

int main()
{
    int a, b, pow;
    printf("Enter the number:");
    scanf("%d", &a);
    printf("Enter the required power:");
    scanf("%d", &b);
    pow = power(a, b);
    printf("The required value is %d", pow);
    return 0;
}
int(power(int n, int m))
{
    int i, j = 1;
    for (i = m; i > 0; i--)
        j = j * n;
    return j;
}