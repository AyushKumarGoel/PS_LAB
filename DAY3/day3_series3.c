//1+ x + x2/2! + x3/3! + x4/4!......
// #include <stdio.h>
// #include<math.h>
// int fact(int n)
// {
//     int f=1;
//     for(int i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }
// int main()
// {
//     int n,sum=1,a;
//     printf("ENTER THE LIMIT");
//     scanf("%d",&n);
//     printf("ENTER THE value of x");
//     scanf("%d",&a);
//     for(int i=1;i<=n;i++)
//     {
//         sum = sum + (pow(a,i))/(fact(i));
//     }
//     printf("SUM IS %d",sum);
//     return 0;
// }


//1+x/1!
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
int p(int a,int b)
{
    for(int i=1;i<a;i++)
    {
      b=b*b;  
    }
    return b;
}
int main()
{
    int sum=1,n,x;
    scanf("%d",&x);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum =sum +p(x,i)/fact(i);
    }
    printf("sum is %d",sum);
    return 0;
}