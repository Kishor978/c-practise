// Wap to generate.
// 1
// 1 1
// 1 1 1
// 1 1 1 1
// 1 1 1 1 1

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
            printf(" 1");
        printf("\n");
    }
    return 0;
}