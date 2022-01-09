#include<stdio.h>

int main(){

   float s,mins,hrs;
     
     printf("Enter time in seconds :");
     scanf("%f",&s);

     mins= (s/60);
     hrs= (s/3600);

     printf("\nTime in seconds :%f",s);
     printf("\nTime in mins :%f",mins);
     printf("\nTime in hours :%f",hrs);



    return 0;
}