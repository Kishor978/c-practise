#include<stdio.h>
#include<conio.h>

int main()
{
    char a,b;

    printf("Enter a character :");
    scanf("%c",&a);
    if(a>=65&&a<=90){
        b=a+32;
        printf("Lower case of %c is %c",a,b);

    }

    else if(a>=97&&a<=122){
        b=a-32;
        printf("Upper case of %c is %c",a,b);
    }
   
}
