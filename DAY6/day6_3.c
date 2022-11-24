#include <stdio.h>
//To check if the given matrix is Magic Matrix
#define size 3
int main()
{
    int a[size][size],i,j,sum_row=0,sum_col=0,temp=0,count=0;
    printf("ENTER ANY MATRIX:\n");
    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            scanf("%d",&a[i][j]);
    
    for(i=0;i<size;i++)
        temp+=a[0][i];
    
    for (i=0;i<size;i++)
    {
        sum_col=0;
        sum_row=0;
        for(j=0;j<size;j++)
        {
            sum_row+=a[i][j];
            sum_col+=a[j][i];
        }
        if (sum_col==sum_row)
        {
            if (sum_col==temp)
                count++;
        }
    }
    if(size==count)
        printf("GIVEN MATRIX IS MAGIC MATRIX");
    else
        printf("GIVEN MATRIX IS NOT MAGIC MATRIX");
    return 0;
}