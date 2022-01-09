// a) Person(name, age, address, contact)

#include <stdio.h>

struct Person
{
    char name[20], address[20];
    int age, contact;
};
int main()
{
    int i, n;
    printf("Enter the number of persons :");
    scanf("%d", &n);
    struct Person person[n];
    for (i = 0; i < n; i++)
    {
        printf("\nPerson %d\n", i+1);
        printf("Enter the name :");
        scanf("%s", &person[i].name);
        printf("Enter %s's age :",person[i].name);
        scanf("%s", &person[i].age);
        printf("Enter %s's address :",person[i].name);
        scanf("%s", &person[i].address);
        printf("Enter %s's contact :",person[i].name);
        scanf("%s", &person[i].contact);
    }
    printf("Personal detail\n");
    for (int i = 0; i < n; i++)
    {
        printf("Person %d\n", i + 1);
        printf("Name: \t\t %s \n", person[i].name);
        printf("Age: \t\t %d \n", person[i].age);
        printf("Address: \t %s \n", person[i].address);
        printf("Contact: \t %d \n\n", person[i].contact);
    }
    return 0;
}