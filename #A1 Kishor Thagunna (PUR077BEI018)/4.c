#include<stdio.h>

int main(){
    float c,f;
   printf("Enter temperature in fahernheit :");
   scanf("%f",&f);
   c=((f-32)*5)/9;
   printf("temperature in celcius :%2f celcius",c);
    return 0;
}