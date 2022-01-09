// 3. WAP to read 10 elements in an array and copy all the elements to another array.
 
#include<stdio.h>
 
int main(){
    int a[10],b[10],i;
    for ( i=0;i<10;i++)
    {
        printf("Enter the number:");
        scanf("%4d",&a[i]);
         b[i]=a[i];
    }
    for (int i=0;i<10;i++)
    printf("%5d",b[i]);
    return 0;
}