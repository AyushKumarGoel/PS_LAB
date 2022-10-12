#include <stdio.h>
#include <string.h>
// Find weekday of given date
/*
int dayofweek(int d, int m, int y)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

int main()
{
    int day, year, month,d; 
    char week[7][12];
    strcpy(week[0], "Sunday");
    strcpy(week[1], "Monday");
    strcpy(week[2], "Tuesday");
    strcpy(week[3], "Wednesday");
    strcpy(week[4], "Thrusday");
    strcpy(week[5], "Friday");
    strcpy(week[6], "Saturday");
    printf("ENTER DATE(dd/mm/yyyy):");
    scanf("%d / %d / %d", &day, &month, &year);
    d=dayofweek(day,month,year);
    printf("%s", week[d]);

    return 0;
}*/
int leap(int num)
{
    if (num % 4 == 0 && (num % 400 == 0 || num % 100 != 0))
        return 1;
    return 0;
}
int year();
int main()
{
    //31 Dec 1 sunday
    int day, year, month,i,sum=0,d;
    scanf("%d / %d / %d", &day, &month, &year);
    int month_table[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year_count[2]={365,366};
    char week[7][12];
    strcpy(week[6], "Sunday");
    strcpy(week[0], "Monday");
    strcpy(week[1], "Tuesday");
    strcpy(week[2], "Wednesday");
    strcpy(week[3], "Thrusday");
    strcpy(week[4], "Friday");
    strcpy(week[5], "Saturday");

    
    for(i=1;i<year-1;i++)
    {
        if (leap(i))
            sum=sum+year_count[1];
        else
            sum=sum+year_count[0];
        
    }

    if (leap(year))
        month_table[1]=month_table[1]+1;
    for (i=0;i<month-1;i++)
    {
        sum=sum+month_table[i];
    }
    sum=sum+day;

    d=sum%7;
    printf("%s",week[d]);

    return 0;
}