// 1.WAP to read elements in an array (3x3) and calculate the sum and average of all elements.

#include<stdio.h>
 
int main()
{
    float av,sum=0;
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the number :");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%4d",a[i][j]);
        printf("\n");
        sum=sum+a[i][j];
        av=sum/10;
    }
    printf("The sum and average are %f and %f.",sum,av);
    return 0;
}