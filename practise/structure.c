#include<stdio.h>
 
struct point
{
    int x,y;
};
int main()
{
    struct point p1,p2,p3;
    printf("\n Enter X and Y value for point1:");
    scanf("%d%d",&p1.x,&p1.y);
    printf("\n Enter X and Yvalue fo rpoint1:");
    scanf("%d%d",&p2.x,&p2.y);
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    printf("\n The value of point 3:");
    printf("\nX=%d,Y=%d",p3.x,p3.y);
    printf("\n");
    return 0;
}