# include<stdio.h>

int main(){
    int a;
    float b;
    double c;
    char chare;
    printf("\nEnter a integer :-");
    scanf("%d",&a);
    printf("\nEnter float :-");
    scanf("%f",&b);
    printf("\n enter a double:-");
    scanf("%lf",&c);
    printf("\nEnter a character :-");
    scanf("%c",&chare);

    printf("\n You have entered a %d integer,%f float,%lf double and %c character!",a,b,c,chare);

    return 0;    

}

