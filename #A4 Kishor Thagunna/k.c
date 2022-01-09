// Wap to genrerate.
//     1
//    121
//   12321
//  1234321
// 123454321

#include <stdio.h>

int main()
{
    int i, j, k, l;
    for (i = 1; i < 6; i++)
    {
        for (k = 0; k < 6 - i; k++)
            printf(" ");
        j = 0;
        for (j = 1; j<i+1; j++)
            printf("%d", j);
        j -= 2;
        for (int l = 1; l < i; l++)
            printf("%d", j--);
        printf("\n");
    }

    return 0;
}