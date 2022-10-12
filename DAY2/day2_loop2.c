//      1
//     2 3
//    3 4 5
//   4 5 6 7

#include<stdio.h>
int main()
{
    int i,j,n=1,k;
    for(i=1;i<5;i++)
    {
        n=i;
        for(j=0;j<5-i;j++)
        {
            printf(" ");
        }
        for(k=5-i;k<5;k++)
        {
            printf(" %d",n);
            n++;
        }
        printf("\n");
    }
}
