/*
A
BC
CDE
DEFG
*/
#include<stdio.h>
int main()
{
    int a=65,i;
    for(i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        a=a-i;
        printf("\n");
    }
}