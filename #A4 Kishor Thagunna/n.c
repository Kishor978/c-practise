// Wap to generate.
// 12345
// 2345
// 345
// 45
// 5
#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        k = i;
        for (j = 7; j>i + 1; j--)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}