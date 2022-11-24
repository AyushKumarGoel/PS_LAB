#include<stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
void main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("%d",factorial(n));
}