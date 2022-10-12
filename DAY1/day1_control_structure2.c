// find the largest number among the three numbers entered by the user.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three number");
    scanf("%d\n%d\n%d\n",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is th lar");
    }
    else if(b>a&&b>c)
    {
        printf("b is the largest");
    }
    else
    printf(" c is the largest");
    return 0;
}
