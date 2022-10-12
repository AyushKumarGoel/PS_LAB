//Write a program to find the sum of the series using the function. a) 1!/1+2!/2+3!/3+4!/4+5!/5
#include <stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main() {
    int n,sum=0,x=1;
    printf("ENTER THE LIMIT");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum = sum + (fact(i))/i;
    }
    printf("SUM IS %d",sum);
    return 0;
}
