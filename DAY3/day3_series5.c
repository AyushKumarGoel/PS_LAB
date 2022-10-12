//x- x3/3! + x5/5! - x7/7!........ 
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
    int n,a,sign=1;
    float sum=0.0;
    printf("ENTER THE LIMIT");
    scanf("%d",&n);
    printf("ENTER THE value of x");
    scanf("%d",&a);
    for(int i=1;i<2*n;i=i+2)
    {
        if(i%2!=0)
        {
            sum = sum + sign*(pow(a,i)/fact(i));
        }
        sign = -1*sign;
    }   
    printf("SUM IS %f",sum);
    return 0;
}
