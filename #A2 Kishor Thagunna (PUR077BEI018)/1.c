#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;

    printf("/nEnter three numbers :");
    scanf("%d%d%d", &a, &b, &c);
    if((a>b&&a<b)||(a<b&&b>c))
    {
        printf("The middle no :%d",a);

    }

    else if((b>a&&b<c)||(b<a&&b>c))
    {
        printf("The middle no :%d",b);
    }
    else if((c>a&&c<b)||(c<a&&c>b))
    {
        printf("The middle no :%d",c);
    }

    getch();
    
}