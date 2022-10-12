/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character),
and depending upon which the total salary is calculated as -
totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’,
allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic.Round off the total salary and then print the integral part only.
 */

#include <stdio.h>
int main()
{
    int totalSalary, basic, hra, da, pf, allow;
    char grade;
    printf("Enter the basic salary");
    scanf("%d", &basic);
    printf("enter allowancew grade");
    scanf("%s", &grade );
    hra = (20 * basic) / 100;
    da = (50 * basic) / 100;
    pf = (11 * basic) / 100;
    switch (grade)
    {
    case 'A':
        allow = 1700;
        break;

    case 'B':
        allow = 1500;
        break;
    case 'C':
        allow = 1300;
        break;

    default:
        allow =1300;
        printf("incorrect grade");
        break;
    }
    totalSalary = basic + hra + da + allow - pf;
    printf("the total salary is %d", totalSalary);
    return 0;
}
