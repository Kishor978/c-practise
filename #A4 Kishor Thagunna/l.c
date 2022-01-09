// wap to generate.
// 1 
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15

#include<stdio.h>
 
int main(){
    int i,k,j,l;
    for(i=1;i<6;i++)
    {
        printf("%d",i);
        l=4,k=i;
        for(j=1;j<i;j++)
        {
            printf("%d",k=k+l);
            l--;
        }
        printf("\n");
    }
    return 0;
}