/*
AYUSH
.YUSH
..USH
...SH
....H
*/
#include<stdio.h>
int main()
{
    char a[10]={'A','Y','U','S','H'};
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(".");
        }
        for(int k=i;k<=5;k++)
        {
            printf("%c",a[k]);
        }
        printf("\n");
    }
}