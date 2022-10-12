#include<stdio.h>
int rep_num(int a[],int n)
{
    int i, dat[100]={0};
    int max = a[0];
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        dat[a[i]]++;
    }
    for(int i=0;i<=max;i++)
    {
        if(dat[i]>1)
        {
            printf("%d",i);
        }
    }
    printf("\n");
    
}
int non_rep_num(int a[],int n)
{
    int i, dat[100]={0};
    int max = a[0];
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        dat[a[i]]++;
    }
    for(int i=0;i<=max;i++)
    {
        if(dat[i]==1)
        {
            printf("%d",i);
        }
    }

}
int char_fre_count(char str[])
{
    int dat[26]={0};
    int i=0;
    while(str[i] !='\0')
    {
        dat[str[i]-'a']++;
        i++;
    }
    for(int i=0;i<=25;i++)
    {
        if(dat[i]>0)
        {
            printf("%s",(i+'a'));
            printf("%d ", dat[i]);
        }
    }
}
int main()
{
    int n=6;
    int a[50] = {1,1,2,3,5,4};
    char b[]="ayush";
    //rep_num(a,6);
    //non_rep_num(a,6);

    char_fre_count(b);
    return 0;
}

