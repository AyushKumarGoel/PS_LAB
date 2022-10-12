// 1
// 23
// 345
// 4567

#include<stdio.h>
int main()
{
    int i,j,n=1;
    for(i=1;i<5;i++)
    {
        n=i;
        for(j=0;j<i;j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
}
