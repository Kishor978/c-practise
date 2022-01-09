#include<stdio.h>
 
 void main(){
     float a,b,c,d,e,marks,totalmarks,percentage;

     printf("Marks obtained in Physics :");
     scanf("%f",&a);
     printf("Marks obtained in Maths :");
     scanf("%f",&b);
     printf("Marks obtained in Electrical :");
     scanf("%f",&c);
     printf("Marks obtained in Computer Programming :");
     scanf("%f",&d);
     printf("Marks obtained in Drawing :");
     scanf("%f",&e);
     printf("Total marks:");
     scanf("%f",&totalmarks);
     marks=a+b+c+d+e;
     percentage=(marks/totalmarks)*100;
     printf("Marks obtained:%f",marks);
     printf("\nPercentage obtained:%2f",percentage);

 }