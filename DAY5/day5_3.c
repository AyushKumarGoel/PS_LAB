#include <stdio.h>
int multiply(int arr[], int n)
{
    // Complete the function
    int mid,left_sum=0,right_sum=0,l,r;
    mid=(int)(n/2);
    for(l=0;l<mid;l++)
    {
        left_sum+=arr[l];
    }
    for(r=mid;r<n ;r++)
    {
        right_sum+=arr[r];
    }
    return (left_sum*right_sum);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t,a[10],end,i;
    scanf("%d",&end);
    for(i=0;i<end;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",multiply(a,end));

    return 0;
}