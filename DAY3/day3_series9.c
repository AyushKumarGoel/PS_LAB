//Given a number N. The task is to print a series of asterisk(*) from 1 till N terms with increasing order and difference being 1.
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER THE LIMIT");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }   
        printf(" ");
    }
    return 0;
}

