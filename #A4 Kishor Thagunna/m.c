// Wap to generate.
// 13579
// 1357
// 135
// 13
// 1

#include<stdio.h>
 
int main()
{
    int i,j;
    for(i=2;i<12;i+=2)
    {
        for(j=i-1;j<10;j+=2)
        printf("%d",j);
        printf("\n");
    }
    return 0;
}