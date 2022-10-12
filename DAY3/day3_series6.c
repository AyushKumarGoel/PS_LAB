//1- x2/2! + x4/4! - x6/6!........
#include <stdio.h>
#include<math.h>
float fact(int n)
{
    float f=1.0;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,a,sign=1;
    float sum=1.0;
    printf("ENTER THE LIMIT");
    scanf("%d",&n);
    printf("ENTER THE value of x");
    scanf("%d",&a);
    for(int i=2;i<2*n;i=i+2)
    {
        sign = -1*sign;
        if(i%2==0)
        {
            sum = sum + sign*(pow(a,i)/fact(i));
        }
    }   
    printf("SUM IS %f",sum);
    return 0;
}
