#include <stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,a[10];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int i=0;i<n-1;i+=2)
        swap(&a[i],&a[i+1]);

    for (int i=0;i<n;i++)
        printf(" %d ",a[i]);

    return 0;
}