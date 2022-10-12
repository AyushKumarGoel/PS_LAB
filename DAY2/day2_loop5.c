// E
// DE
// CDE
// BCDE
// ABCDE
#include<stdio.h>
int main()
{
    int a=69,i;
    for(i=1;i<6;i++)
    {
        a=70-i;
        for(int j=0;j<i;j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}
