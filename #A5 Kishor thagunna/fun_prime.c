#include <stdio.h>
int(prime(int));
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    prime(n);
    return 0;
}
int(prime(int a))
{
    int i;
    for (i = 2; i <=a / 2; i++)
    {
        if (a % i == 0)
            {
                printf("%d is not a prime number.", a);
            }
        else if (i == a / 2)
            {
                printf("%d is a prime number.", a);
            }

        else;
    }
}
