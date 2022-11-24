#include <stdio.h>
int maxDays(int arr[], int n)
{
    // code here
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, data;
    int max = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &data);
        if (data > max)
        {
            max = data;
        }
    }
    printf("%d", max);

    return 0;
}