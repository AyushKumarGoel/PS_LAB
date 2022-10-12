/*
Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
#include<stdio.h>
int main()
{
    int temp;
    printf("Enter temperature");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("Freezing weather");
    }    
    else if(temp>0&&temp<10)
    {
        printf("Very Cold weather");
    }
    else if(10<temp&&temp<20)
    {
        printf("Cold weather");
    }
    else if(20<temp&&temp<30)
    {
        printf("Normal in Temp");
    }
    else if(30<temp&&temp<40)
    {
        printf("Its Hot");
    }
    else
    {
        printf("Its Too Hot");
    }
    return 0;
}
