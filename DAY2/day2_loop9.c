 /*
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
*/

#include<stdio.h>
int main()
{
    int i,j,n=1;
    for(i=1;i<6;i++)
    {
        for(j=0;j<6-i;j++)
        {
            printf(" ");
        }
        for(int k=6-i;k<6;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<6;i++)
    {
        for(int k=5-i;k<6;k++)
        {
            printf(" ");
        }
        for(j=0;j<5-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
