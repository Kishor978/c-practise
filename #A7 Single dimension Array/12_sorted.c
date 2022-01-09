// 12. WAP to insert New value in the array (sorted list ).
#include<stdio.h>
 
int main(){
     int a[100],i,n=10;
    char c;
    printf("Enter the first 10 inputs:");
    for (i=0;i<10;i++)
    {
        printf("\nEnter the number:");
        scanf("%d",&a[i]);
    }
    for(n;n>0;n++)
    {
        printf("Do you want to add more numbers (y/n :)");
        scanf("%c",&c);
        if (c=='y'||c=='Y')
        {
            printf("Enter the number :");
            scanf("%d",&a[n]);
        }
        else 
        break;
    }
    printf("\n The number you entered are :");
    for(i=0;i<n;i++)
    printf("%2d",a[i]);
    return 0;
}