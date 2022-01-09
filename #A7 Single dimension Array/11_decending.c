// 11. WAP to read 10 elements in an array and sort them in descending order.

#include<stdio.h>
 
int main(){
    int a[10],i,j,dec;
    for (i=0;i<10;i++)
    {
        printf("Enter the number:");
        scanf("%d",&a[i]);
    }
    dec=a[0];
    for( i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if (a[i]<a[j])
            {
                dec=a[j];
                a[j]=a[i];
                a[i]=dec;
            }
        }
        printf(" %d\n",a[i]);
    }
    return 0;
}