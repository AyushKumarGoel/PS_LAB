// finding the length of a string using a user-defined function

#include <stdio.h>
#include<string.h>
int sl(char a[])
{
    int c;
    for(c=0;a[c]!='\0';++c);
    return c;
}
int main() {
    char a[100];
    printf("Enter\n");
    scanf("%s",a);
    printf("%d",sl(a));
    return 0;
}