#include <stdio.h>

int oddeven(int);
int main()
{
    int n, res;
    printf("Enter a number :");
    scanf("%d", &n);
    res = oddeven(n);
    if (res==1)
        printf("Odd number");
    else
        printf("Even number ");
    printf("\n");
    return 0;
}
int oddeven(int a)
{
    if (a % 2 == 0)
        return 0;
    return 1;
}