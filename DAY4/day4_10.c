// a raised to power b using divide and conquer    x, y/2 and temp *temp or x*temp*temp
#include <stdio.h>
float power(float x, int y)
{
    float temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    // float a=y/2;
    // printf("temp:%f x:%f , y/2:%f\n",temp,x,a);
    if (y % 2 == 0)
        return temp * temp;
    else
    {
        if (y > 0)
            return x * temp * temp;
        else
            return (temp * temp) / x;
    }
}
int main()
{
    float p = power(2, -2);
    printf("[%d] raised to power [%d] : %0.2f", 2, -2, p);
}