#include<stdio.h>

void main(){
    float km, m, ft, inch;

    printf("Enter the distance between Dhangadi  And Baitadi :-");
    scanf("%f",&km);
    m = km*1000;
    ft= km*3280.83;
    inch= km*39370.1;
    printf("The distance in meter:-%f \nft:-%f \ninch:-%f",m,ft,inch);

}