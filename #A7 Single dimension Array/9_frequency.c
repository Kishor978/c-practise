// 9. WAP to count the frequency of each element of an array.

#include<stdio.h>
 
int main(){
    int a[10],i,j,n,c1,c2;
    for (i=0;i<10;i++)
    {
        printf("Enter a number :");
        scanf("%d",&a[i]);
    }
    for(i=0,n=0;i<10,n<10;i++,n++)
    {
        c1=0;
        for(j=0;j<10;j++)
        {
            if(a[i]==a[j])
            c1+=1;
        }
        c2=0;
        for(j=0;j<=i;j++)
        {
            if (a[i]==a[j])
            c2+=1;
        }
        if(c2<2)
        printf("The frequency of element %d is %d.\n",a[i],c1);
    }
    return 0;
}