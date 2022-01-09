// 7. WAP to find the number of vowels, consonants, digits and white spaces in a given string.

#include <stdio.h>

int main()
{
    char st[40];
    int i, vow = 0, con = 0, dig = 0, sp = 0;
    printf("Enter the string :");
    gets(st);
    for (i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
            vow++;
        else if (st[i] > 47 && st[i] < 58)
            dig++;
        else if (st[i] == ' ')
            sp++;
        else
            con++;
    }
    printf("The number of vowels is %d.\n", vow);
    printf("The number of conconents  is %d.\n", con);
    printf("The number of digits is %d.\n", dig);
    printf("The number of spaces is %d.\n", sp);

    return 0;
}