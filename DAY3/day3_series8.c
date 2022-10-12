//1*2*3 + 2*3*4 +3*4*5+ 4*5*6 + . …... .+ n*(n+1)*(n+2).
#include <stdio.h>

int main() {
    int n,sum=0,x=1;
    printf("ENTER THE LIMIT");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        x = i*(i+1)*(i+2);
        sum = sum + x;
    }
    printf("SUM IS %d",sum);
    return 0;
}
