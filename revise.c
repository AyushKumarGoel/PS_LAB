// Online C compiler to run C program online
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
int main()
{
    int sum=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum =sum +fact(i);
    }
    printf("sum is %d",sum);
    return 0;
}