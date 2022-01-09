// g) Account(id, name, acno, actype, balance)

#include <stdio.h>
struct account
{
    char id[20], name[20], acno[20], actype[20], balance[20];
};
int main()
{
    int n;
    printf("Enter the number of Accounts: ");
    scanf("%d", &n);
    struct account a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Enter the name of account holder: ");
        scanf("%s",&a[i].name);
        printf("Enter the %s's id :", a[i].name);
        scanf("%s", &a[i].id);
        printf("Enter the %s's account no. :", a[i].name);
        scanf("%s", &a[i].acno);
        printf("Enter the %s's account type :", a[i].name);
        scanf("%s", &a[i].actype);
        printf("Enter the %s's total balance :", a[i].name);
        scanf("%s", &a[i].balance);
    }
    printf("\n\nEersonnels Details:");
    for (int i=0; i<n; i++)
    {
        printf("Account %d\n", i+1);
        printf("Name:\t\t%s \n",a[i].name);
        printf("Id:\t\t%s\n",a[i].id);
        printf("Account no.:\t%s\n",a[i].acno);
        printf("Account type:\t%s\n",a[i].actype);
        printf("Total balance:\t%s",a[i].balance);
    }
    return 0;
}  
