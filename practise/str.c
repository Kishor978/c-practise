#include<stdio.h>
 
int main(){
    char s[10][20];
    int i,j;
    for (i=0;i<10;i++)
    {
        printf("Enter student name :");
        scanf("%s",s[i]);
    }
    printf("Students names in alphabetical order is \n");
    for(i=0,i<10;i++)
    {
        for (j=0;j<20;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);

            }
        }
    }
    printf("Students names in alphabetical order is \n");
    for (i=0;i<10;i++)
    printf("n%s")
    return 0;
}
