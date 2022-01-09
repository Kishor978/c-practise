// 2.Wap to read numbers from a file  and write even, odd t seperate files.

#include <stdio.h>

int main()
{
    FILE *fnum = fopen("2.txt", "w");
    int n = 0;
    if (fnum == NULL)
    {
        printf("Error !!");
        return 1;
    }
    printf("Enter numbers (space for new one & negative for end) :\n");
    while(n>=0)
    {
        scanf("%d",&n);
        putw(n,fnum);
    }
    fclose(fnum);

    FILE *fodd=fopen("2odd.txt","w");
    FILE *feven =fopen("2even.txt","w");

    fnum =fopen("2.txt","r");
    while((n=getw(fnum)) >=0)
    {
        if(n%2==0) putw(n,feven);
        else putw(n,fodd);
    }
    fclose(fnum);
    fclose(feven);
    fclose(fodd);

    feven= fopen("2even.txt","r");
    printf("\n\nEven Number File:\n");
    while((n =getw(feven)) != EOF)
    printf("%d",n);
    fclose(feven);
    feven= fopen("2odd.txt","r");
    printf("\n\nOdd Number File:\n");
    while((n =getw(fodd)) != EOF)
    printf("%d",n);
    fclose(fodd);
   
    return 0;
}