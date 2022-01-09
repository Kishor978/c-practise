#include <stdio.h>
int lcm(int, int);
int main()
{
    int num1, num2, lc;
    printf("Enter the two numbers:");
    scanf("%d%d", &num1, &num2);
    lc = lcm(num1, num2);
    printf("\nLCM(%d,%d)=%d", num1, num2, lc);
    return 0;
}

int lcm(int cnum1, int cnum2)
{
    int i, j;
    for (i = 1; i < cnum1+1; i++)
    
        if (cnum1 % i == 0)
            if (cnum2 % i == 0)
                j = i;
        j = (cnum1 * cnum2) / j;
    
    return j;
}
