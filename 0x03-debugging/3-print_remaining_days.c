#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_of_year = 0;
    int remaining_days = 0;

    // calculate the day of year for non-leap years
    for (int i = 1; i < month; i++) {
        day_of_year += days_in_month[i];
    }
    day_of_year += day;

    // check if it's a leap year and adjust the days in February
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[2] = 29;
    }

    // calculate the day of year for leap years
    if (days_in_month[2] == 29 && month > 2) {
        day_of_year++;
    }

    // calculate the remaining days in the year
    remaining_days = (days_in_month[1] + days_in_month[2] + days_in_month[3] + days_in_month[4] +
                      days_in_month[5] + days_in_month[6] + days_in_month[7] + days_in_month[8] +
                      days_in_month[9] + days_in_month[10] + days_in_month[11] + days_in_month[12]) -
                      day_of_year;

    // print the results
    if (days_in_month[2] == 29 && month == 2 && day > 29) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    } else {
        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", remaining_days);
    }
}

