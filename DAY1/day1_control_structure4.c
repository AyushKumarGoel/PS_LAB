// check whether the year entered by the user is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0))
    printf("Leap year");
    else
    printf("Not Leap Year");
    return 0;
}