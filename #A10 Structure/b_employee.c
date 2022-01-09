// b) Employee(id, name, address, contact, doj, designation, salary)

#include <stdio.h>
struct Employee
{
    char id[20], name[20], address[20], contact[15], dob[10], designation[20], salary[10];
};
int main()
{
    struct Employee employee;
    printf("Enter the employee's id :");
    scanf("%s", &employee.id);
    printf("Enter the employee's name :");
    scanf("%s", &employee.name);
    printf("Enter the employee's address :");
    scanf("%s", &employee.address);
    printf("Enter the employee's contact :");
    scanf("%s", &employee.contact);
    printf("Enter the employee's date of birth (xxxx/xx/xx):");
    scanf("%s", &employee.dob);
    printf("Enter the employee's designation :");
    scanf("%s", &employee.designation);
    printf("Enter the employee's salary :");
    scanf("%s", &employee.salary);
    printf("Employee Details\n");
    printf("ID\t\tName\t\taddress\t\tContact\t\tDate of Birth\t\tDesigination\t\tSalary\n");
    printf("%s\t\t%s\t\t%s\t\t%s\t\ty%s\t\t%s\t\t%s", employee.id, employee.name, employee.address, employee.contact, employee.dob, employee.designation, employee.salary);
    return 0;
}