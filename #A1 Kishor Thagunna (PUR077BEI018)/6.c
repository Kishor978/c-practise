#include<stdio.h>

int main(){
    int a,r,q,f;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    r=a%10;
    q=a/10;
    f=(r*10)+q;
    printf("Let wap this number:%d",f);
    return 0;
}