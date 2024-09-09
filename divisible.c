/*  check if, for every pair of three input numbers, at least one number is
divisible by the other without leaving a remainder. */

//use a series of conditional checks to determine if any of the three numbers divide each other perfectly.
//in both direction
#include <stdio.h>



int main()
{
    int a,b,c;
      // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check each pair for divisibility
    if((a % b == 0 ||  b % a == 0) &&
    (a % c == 0 ||  c % a  == 0) &&
    (b % c == 0 ||  c % b  == 0)) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }
    return 0;
}
