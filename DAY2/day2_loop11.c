/*
1        1
12      21
123    321
1234  4321
1234554321
*/
#include<stdio.h>
int main()
{
    int n=1;
    for(int i=1;i<=5;i++)
    {
        n=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        for(int j=1;j<=5-i;j++)
        {
            printf("  ");
        }
        n--;
        for(int k=1;k<=i;k++)
        {
            printf("%d",n);
            n--;
        }
        printf("\n");
    }
    return 0;
}