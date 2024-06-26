#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
/*Function that prints the largest of three integers.*/
int largest_number(int a, int b, int c);
/*converts date to the day of year and determines how many days are left in the year*/
int is_leap_year(int year);
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);
#endif /* MAIN_H */
