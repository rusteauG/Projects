#include <stdio.h>
enum Month {
    JANUARY = 1,  // Start from 1 since months start from 1
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
void printMonth(enum Month month);

//define enums to Rep Months
int main()
{
    int monthNumber;
    // Ask the user to enter a month number
    printf("Enter a number (1-12) to display the corresponding month: ");
    scanf("%d",&monthNumber);

     // Validate the number and call the function to display the corresponding month
    if (monthNumber >= 1 && monthNumber <= 12) {
//ensures that the integer value monthNumber is correctly treated as an enum Month type.
        printMonth((enum Month)monthNumber); // Cast monthNumber to enum Month,Code will work without , but Good Pratice
    } else {
        printf("Invalid input. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

void printMonth(enum Month month) {
    switch(month) {
        case JANUARY: printf("January\n"); break;
        case FEBRUARY:  printf("February\n"); break;
        case MARCH:     printf("March\n"); break;
        case APRIL:     printf("April\n"); break;
        case MAY:       printf("May\n"); break;
        case JUNE:      printf("June\n"); break;
        case JULY:      printf("July\n"); break;
        case AUGUST:    printf("August\n"); break;
        case SEPTEMBER: printf("September\n"); break;
        case OCTOBER:   printf("October\n"); break;
        case NOVEMBER:  printf("November\n"); break;
        case DECEMBER:  printf("December\n"); break;
        default:        printf("Invalid month number!\n");
    }
}
