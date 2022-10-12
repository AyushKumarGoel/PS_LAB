// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c)
    printf("EQUILATERAL TRIANGLE");
    else if (((a==b)&&(a!=c))||((a==c)&&(a!=b)))
    printf("ISOSCELES TRIANGLE");
    else 
    printf("SCALENE TRIANGLE");
    return 0;
}
