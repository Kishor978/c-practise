#include<stdio.h>

int main(){
    int a,b,c,d,e,f,sum,reverse,sum2,x;
    printf("Enter a 5 digit number:");
    scanf("%d",&a);
    b=a/10000;//first digit
    f=a%10;//last digit
    x=a%10000;//reminder not including first digit
    c=x/1000;//second digit
    d=(x%1000)/100;//third digit
    e=((x%1000)%100)%10;//fourth digit

    sum=b+c+d+e+f;
    sum2=b+f;
    reverse=f*10000+e*1000+d*100+c*10+b;

    printf("\nThe sum of the digits:%d",sum);
    printf("\nThe sum of the first and last digit :%d",sum2);
    printf("\nThe reverse of the digits :%d",reverse);

    return 0;

}
