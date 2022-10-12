//#DAY2
/*
1
23
345
4567
*/
#include<stdio.h>
int main()
{
    int i=0,j=0;
    int n=1;
    for(i;i<5;i++)
    {
        n=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
}
