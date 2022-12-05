#include "stdio.h"

enum Months
{ January,February,March,April,May,June,July,August,September,October,November,December};

void month(enum Months month, int day)
{
    int result;
    int nextmonth = day / 30;
    result = month + nextmonth;
    switch (result)
    {
    case 1:
        printf("the month is January");break;
    case 2:
        printf("the month is  February");break;
    case 3:
        printf("the month is  March");break;
    case 4:
        printf("the month is  April");break;
    case 5:
        printf("the month is  May");break;
    case 6:
        printf("the month is  June");break;
    case 7:
        printf("the month is  July");break;
    case 8:
        printf("the month is  August");break;
    case 9:
        printf("the month is  September");break;
    case 10:
        printf("the month is  October");break;
    case 11:
        printf("the month is  November");break;
    case 12:
        printf("the month is  December");break;

    default:
        printf("That month does not exist");break;
    }
}

int main()
{
    month(1, 45);
}