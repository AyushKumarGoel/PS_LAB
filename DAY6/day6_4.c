#include <stdio.h>
//Matrix Rotation at 180 Degrees
/*
00 01 02
10 11 12
20 21 22

i j
0 0  2 2   size-1    size-1
0 1  1 2   size-1-j  size-1-i
1 0  2 1   size-1-j  size-1-i
size/2 and size/2
*/

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
    for (i=0;i<size;i++)
        for(j=0;j<size-i;j++)
            swap(&a[i][j],&a[size-1-j][size-1-i]);
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
    
    printf("MATRIX ROTATION CLOCKWISE AT 180 DEGREES:\n");
    rotate(a);
    print(a);
    return 0;
}