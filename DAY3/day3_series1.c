// //Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................
// #include <stdio.h>
// int main() {
//     int n,sum=0,x=1;
//     printf("ENTER THE LIMIT");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         x=x*i;
//         sum = sum + x;
//     }
//     printf("SUM IS %d",sum);
//     return 0;
// }




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