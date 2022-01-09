// e) Author(id, name, contact. Email, gender)
#include <stdio.h>
struct Author
{
    char id[20], name[20], email[20], gender[20];
};
int main()
{
    int n, i;
    printf("Enter the no. of Authors: ");
    scanf("%d", &n);
    struct Author a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nAuthor %d\n", i + 1);
        printf("Enter the Author's name :");
        scanf("%s", a[i].name);
        printf("Enter the %s's id :", a[i].name);
        scanf("%s", a[i].id);
        printf("Enter the %s's email :", a[i].name);
        scanf("%s", a[i].email);
        printf("Enter the %s's gender :", a[i].name);
        scanf("%s", a[i].gender);
        printf("\n\nEersonnels Details:");
        for (int i = 0; i < n; i++)
        {
            printf("Person %d\n", i+1);
            printf("Name:\t\t%s \n",a[i].name);
            printf("Age:\t\t%d\n",a[i].name);
            printf("Email:\t\t%s\n",a[i].email);
            printf("Gender:\t\t%s\n",a[i].gender);
        }
        return 0;
    }
}