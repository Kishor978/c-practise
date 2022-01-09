//6. WAP to read 10 elements in an array and search for a particular number among the array list.

#include <stdio.h>

int main()
{
    int a[10],i,n;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }
    printf("Enter the number you are searching for :");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        if (n == a[i])
        {
            printf("The number %d is a[%d].\n", n, i);
           
        }
        else if (i == 9)
            printf("The number is not found.");
    }

    return 0;
}