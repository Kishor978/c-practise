//9.WAP to check whether a given word is palindrome or not.
#include<stdio.h>
#include<string.h>

int main(){
    char st[40];
    int i, len2, len1;
    printf("Enter the sentence : ");
    gets(st);
    len2 = strlen(st);
    len1 = len2-1;
    for(i=0,len1;i<(len2/2);i++,len1--){
        if(st[i]==st[len1])
        continue;
        else
        break;
    }
    if((len2/2)==i)
    printf("\nThe given words is a palindrome.\n");
    else
    printf("The given word is not palindrome.");

    return 0;
}