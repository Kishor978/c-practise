// Wap to generate.
// 10101
// 01010
// 10101
// 01010
// 10101

#include<stdio.h>
 
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<i+6;j++)
        printf("%d",j%2);
        printf("\n");
    }
    
    return 0;
}