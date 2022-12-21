#include <stdio.h>

int main()
{
    int year = 2022;
    printf("Year %d is %s leap year.\n", year, 
        (!(year % 400) || !(year % 4)) && (year % 100) ? "a" : "not a");

    return 0;
}
