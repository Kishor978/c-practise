//7.WAP to add two given matrices (3x3) and print the resultant matrix.

#include <stdio.h>

int main()
{
    int a[3][3], n, b[3][3], i, j;
    for (n=1;n<3;n++)
    {
        printf("Enter the value for matrix %d\n",n);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(n==1)
                {
                  printf("Enter a number : ");
                  scanf("%d",&a[i][j]);
                }
                if(n==2)
                 {
                   printf("Enter a number : ");
                   scanf("%d",&b[i][j]);
                 }

            }
        }
    }
    printf("The sum of the two matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j] = a[i][j] + b[i][j];
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}