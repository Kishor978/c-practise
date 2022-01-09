// c) Customer(id, name, address, contact)

#include<stdio.h>
struct Customer
{
    char id[20], name[20], address[20], contact[15];
};
int main()
{
    struct Customer customer;
    printf("Enter the customer's id :");
    scanf("%s", &customer.id);
    printf("Enter the customer's name :");
    scanf("%s", &customer.name);
    printf("Enter the customer's address :");
    scanf("%s", &customer.address);
    printf("Enter the customer's contact :");
    scanf("%s", &customer.contact);
    printf("Customer's Details...");
    printf("\nID\t\tName\t\taddress\t\tContact\n");
    printf("%s\t\t%s\t\t%s\t\t%s",customer.id, customer.name, customer.address, customer.contact);

    return 0;
}