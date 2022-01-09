//(Using switch case) 
#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
    int a; 
    printf("Enter percentage scored:"); 
    scanf("%d",&a); 
    switch(a/10) 
    { 
        case 10: 
        case 9: 
        case 8: 
        printf("Distinction"); 
        break; 
        case 7: 
        case 6: 
        printf("First divison"); 
        break; 
        case 5: 
        printf("Second divison"); 
        break;  case 4: 
        printf("Third divison"); 
        break; 
        default: 
        printf("Fail"); 
        break; 
    } 
 getch(); 
} 
