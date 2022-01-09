#include<stdio.h>
 


int main(){
    int i,s=0;

    for(i=0;i<=100;i++)
        
        s+=i*i*i;
       
        printf("\n%d",s);
    return 0;

}