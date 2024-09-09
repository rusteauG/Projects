/* 
Conditions
-If the year can be divided by 4 without a remainder > LEAP YEAR
-If the year can also be divided by 100 without remainder > then it NOT a Leap Year
-Unless the year can be divided by 400 > Then its a LEAP Year

 */
#include <stdio.h>



int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d year is a leap year\n", year);
    else if (year % 100 == 0)
        printf("%d year is NOT a leap year\n", year);
    else if (year % 4 == 0)
        printf("%d year is a leap year\n", year);
    else
        printf("%d year is NOT a leap year\n", year);



    return 0;
}



// Function to check if a year is a leap year
int isLeapYear(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}