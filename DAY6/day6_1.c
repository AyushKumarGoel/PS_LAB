//Matrix rotation clockwise at 90 degrees
/*
20 10 00  current_row_index = 0, i = 2, 1, 0 
21 11 01 current_row_index = 1, i = 2, 1, 0 
22 12 02  current_row_index = 2, i = 2, 1, 0
*/
#include <stdio.h>
#define size 4
void print(int a[][size])
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%4d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void transpose(int a[][size])
{
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if (i+j<i+i)
                swap(&a[i][j],&a[j][i]);
}

void rotate(int a[][size])
{
    int i,j;
    for (i=0;i<(int)(size/2);i++)
        for(j=0;j<size;j++)
            swap(&a[j][i],&a[j][size-1-i]);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a[size][size],i,j,num=1;
    for (i=0;i<size;i++)
        for(j=0;j<size;j++)
            a[i][j]=num++;
    
    printf("ORIGINAL MATRIX:\n");
    print(a);

    transpose(a);
    // print(a);
    
    printf("MATRIX ROTATION CLOCKWISE AT 90 DEGREES:\n");
    rotate(a);
    print(a);
    return 0;
}