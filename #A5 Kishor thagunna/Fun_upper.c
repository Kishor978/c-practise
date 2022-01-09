#include <stdio.h>

char myuppercase(char);

int main()
{
    char ch;

    printf("Enter lowercase letter :");
    scanf("%c", &ch);
    printf("Uppercase:%c", myuppercase(ch));
    printf("\n");
    return 0;
}
char myuppercase(char x)
{
    if (x >= 'a' && x <= 'z')
        return (x - 32);
}