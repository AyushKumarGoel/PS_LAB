//Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…
#include <stdio.h>
#include<math.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    float sum=0.0;
    printf("ENTER THE LIMIT");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=i+1;
        int b=2*i - 1;
        sum = sum + pow(-1,a)*i/fact(b);
    }
    printf("SUM IS %f",sum);
    return 0;
}
