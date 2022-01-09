// h)   Point(x, y)
#include<stdio.h>

struct Points{
    int x, y;
};
int main(){
    struct Points point;
    printf("Enter X and Y points : ");
    scanf("%d  %d",&point.x,&point.y);
    printf("\nX\t\tY\n%d\t\t%d",point.x,point.y);
    return 0;
}