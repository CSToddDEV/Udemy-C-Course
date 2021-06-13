/*
Author: Calvin Todd
Assignment: Displays average rainfall for year, total, and per month for 5 years of collected values
*/

#include <stdio.h>
#include <stdlib.h>
#define YEARS 5
#define MONTHS 12

int main()
{
    //Initialize variables
    float rainfall[YEARS][MONTHS] = {
        {5.12, 6.12, 8.15, 9.52, 10.2, 55.2, 21.0, 13.1, 13.8, 41.2, 21.0, 9.2},
        {20.1, 9.12, 13.2, 72.1, 22.0, 23.1, 2.13, 5.13, 10.7, 50.8, 5.18, 9.12},
        {11.2, 25.2, 2.25, 8.79, 9.12, 8.17, 4.52, 2.17, 10.2, 7.41, 8.51, 9.71},
        {3.12, 7.12, 8.79, 9.78, 5.21, 7.41, 80.2, 8.01, 7.41, 9.63, 75.2, 8.25},
        {55.3, 2.35, 50.2, 12.3, 9.60, 75.2, 21.3, 7.41, 5.41, 8.79, 79.1, 5.21}
    };
    float avg_years[YEARS] = {0};
    float avg_months[MONTHS] = {0};
    float avg_total = 0;
    int year_i = 0;
    int month_i = 0;
    int year = 2010;

    //Loop through array and add values to average arrays
    while (year_i < YEARS)
    {
        //Reset month_i
        month_i = 0;

        while (month_i < MONTHS)
        {
            //Add to arrays
            avg_total += rainfall[year_i][month_i];
            avg_years[year_i] += rainfall[year_i][month_i];
            avg_months[month_i] += rainfall[year_i][month_i];

            //Increase month_i
            ++month_i;
        }
        //Increase year_i
        ++year_i;
    }

    //Calculate and display yearly averages
    printf("Yearly Averages:\n");
    for (year_i = 0; year_i < YEARS; ++year_i)
    {
        avg_years[year_i] = (float) avg_years[year_i] / MONTHS;
        printf("     %d     %.2f\n\n", year, avg_years[year_i]);
        ++year;
    }

    //Calculate and display total average
    avg_total = (float) avg_total / (YEARS * MONTHS);
    printf("Total Average Rainfall was %.2f over 5 years!\n\n", avg_total);

    //Calculate and display monthly average
    printf("Average Monthly Rainfall:\nJAN   FEB   MAR   APR   MAY   JUN   JUL   AUG   SEP   OCT   NOV   DEC\n");
    for (month_i = 0; month_i < MONTHS; ++month_i)
    {
        avg_months[month_i] = (float) avg_months[month_i] / YEARS;
        printf("%.2f ", avg_months[month_i]);
    }

    return 0;
}
