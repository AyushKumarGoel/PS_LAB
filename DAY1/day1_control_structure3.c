// check whether an alphabet entered by the user is a vowel or a consonant.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character");
    scanf("%s",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    printf("Vowel");
    else
    printf("constant");
    return 0;
}
