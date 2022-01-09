// Wap to generate.
//  1
//  2  3
//  4  5  6
//  7  8  9 10
// 11 12 13 14 15

#include <stdio.h>

int main()
{
    int i, j, x = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            x++;
            printf("%3d", x);
        }
        printf("\n");
    }
    return 0;
}