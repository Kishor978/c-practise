#include<stdio.h>
int square(int);
int main(){
    int i,r;
    printf(" Enter the number :");
    scanf("%d",&i);
    r=square(i);
    printf("The square of given number  is %d :",r);
    return 0;
}
int square(int s){
    
    s*s;
    return s*s;  
}

