#include<stdio.h>
struct DOB
{
    int yr;
    int mon;
    int day;
};
struct student
{
    char name[20];
    int roll;
    char address[20];
    struct DOB birthdate;
};
 
int main(){
    struct student s;
    ("\n Enter student name :");
    scanf("%s",s.name);
    printf("\n Enter student name :");
    scanf("%s",&s.roll);
    printf("\n Enter student name :");
    scanf("%s",s.address);
    printf("\n Enter student name :");
    scanf("%s",&s.birthdate.yr);
    printf("\n Enter student name :");
    scanf("%s",&s.birthdate.mon);
    printf("\n Enter student name :");
    scanf("%s",&s.birthdate.day);

    printf("\nstudent name:%s",s.name);
    printf("\nstudent roll no :%d",s.roll);
    printf("\nstudent address :%s",s.address);
    printf("\nstudent date of birth:%d year,%d month,%d day",s.birthdate.yr,s.birthdate.mon,s.birthdate.day);




    return 0;
}