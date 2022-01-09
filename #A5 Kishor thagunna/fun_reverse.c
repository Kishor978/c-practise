#include <stdio.h>
int reverse(int);

int main()
{
    int m, rev;
    printf("Enter the number to be reversed :");
    scanf("%d", &m);
    rev = reverse(m);
    printf("The reverse of number is:%d", rev);
    return 0;
}
int reverse(int x)
{
    int i, y = 0;
    for (i = x; i > 0; i /= 10)
        y = y * 10 + i % 10;
    return y;
}