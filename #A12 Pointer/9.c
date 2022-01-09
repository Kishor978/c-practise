// 9.WAP to count the frequency of each element of an array.

#include<stdio.h>
 
int main(){
    int a[10],i,j,freq1,freq2;
    for(i=0;i<10;i++)
    {
        printf("Enter the number :");
        scanf("%d",(a+i));
    }
    for(i=0;i<10;i++)
    {
        freq1=0;
        for(j=0;j<10;j++)
        {
            if(*(a+i)==*(a+j))
            freq1 +=1;
        }
        freq2=0;
        for(j=0;j<=i;j++)
        {
            if(*(a+i)==*(a+j))
            freq2 +=1;
        }
        if(freq2<2)
        printf("The frequency of element %d is %d.\n",*(a+i),freq1);
    }
    return 0;
}