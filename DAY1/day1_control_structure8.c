//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter x and y coordinate");
    scanf("%d%d",&a,&b);
    if(a>0&&b>0)
    printf("1st Coordinate");
    else if (a>0&&b<0)
    printf("3rd Coordinate");
    else if (a<0&&b>0)
     printf("2nd Coordinate");
    else
    printf("4th Coordinate");
    return 0;
}
