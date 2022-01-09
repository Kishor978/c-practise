// 8. WAP to count the number of words in a given line of text.

#include<stdio.h>
 
int main(){
    char st[40];
    int i,word=1;
    printf("Enter the strig :");
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        if (st[i]==' ')
        word++;
    }
    printf("The number of words is %d",word);
    return 0;
}