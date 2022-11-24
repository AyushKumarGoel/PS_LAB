#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t,data;
    int min=__INT_MAX__;
    printf("ENTER THE NUMBER OF CHOCOLATE:");
    scanf("%d",&t);
    printf("ENTER ELEMENT AS THE SWEETNESS:");
    while(t--)
    {
        scanf("%d",&data);
        if (data<min)
        {
            min=data;
        }
    }
    printf("%d",min);
    return 0;
}