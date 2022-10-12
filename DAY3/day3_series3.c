//1+ x + x2/2! + x3/3! + x4/4!......
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
    int n,sum=1,a;
    printf("ENTER THE LIMIT");
    scanf("%d",&n);
    printf("ENTER THE value of x");
    scanf("%d",&a);
    for(int i=1;i<=n;i++)
    {
        sum = sum + (pow(a,i))/(fact(i));
    }
    printf("SUM IS %d",sum);
    return 0;
}
