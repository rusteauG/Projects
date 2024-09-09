/* **********************************************************************************************
Conditions                                                                                      |
write a program that finds the next day on the calendar, you'll need to handle the following:   |
                                                                                                |
Input for the current day, month, and year.                                                     |
Correctly handling leap years for February (29 days in a leap year, 28 days otherwise).         |
Correctly determining the number of days in each month (30 or 31 days, except February).        |
Incrementing the date while considering month and year boundaries                               |
 (e.g., transitioning from December 31 to January 1 of the next year).                          |
*************************************************************************************************
 */
#include <stdio.h>
// Function to check if a year is a leap year
int isLeapYear(int year) {
    if(year % 400 == 0 || ( year % 4 == 0  && year % 100 != 0 ) )
        return 1; //Leap Year
    else
        return 0; //Not a Leap Year

}

//Function to Find ?Next Day
void findNextDay(int day,int month,int year) {
    int daysInMonth;
    // Array holding number of days in each month
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check if it's a leap year, and if it's February
    if(isLeapYear(year) && month == 2) {
        daysInMonth = 29; // February has 29 days in a leap year
    }else{
        daysInMonth = monthDays[month -1];
    }

    // Increment the day
    day++;
    // If day exceeds the number of days in the month, go to the next month
    if(day > daysInMonth) {
        day =1; // Reset the day to 1
        month++; // Increment the month
    }
   // If month exceeds 12 (December), go to the next year
    if(month >12) {
        month = 1;  // Reset month to January
        year++;     // Increment the year
    }

    // Print the next day's date
    printf("The next day is: %02d/%02d/%04d\n", day, month, year);
}


int main()
{
    int day, month, year;

    // Input the current day, month, and year
    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    // Call the function to find and print the next day
    findNextDay(day, month, year);
    return 0;
}
