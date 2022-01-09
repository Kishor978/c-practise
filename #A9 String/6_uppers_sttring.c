// 6. WAP to convert all characters in a given string to uppercase.

#include<stdio.h>
 
int main(){
    char st[20];
    int i,n;
    printf("Enter the string :");
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        n=st[i];
        if(n<80)
        continue;
        else {
            n=n-32;
            st[i]=n;
        }
    }
    printf("The uppercased string is %s",st);
    

    return 0;
}