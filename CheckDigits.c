//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// If a given number is "double-digit" / "triple-digit" / neither...
// 1,2,3,.., 10,11,12, 99, 100, 101, 999, 1000, 1001, ...
void checkDigits(int);
void checkDigits2(int);

int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num); // 1005
    checkDigits(num);
    checkDigits2(num);
    return 0;
}


void checkDigits(int num){
        // For double-digit check
       if ((num >= 10 && num <= 99) || (num <=-10 && num >= -99))
        printf("The number %d is a double-digit number.\n", num);
           // For triple-digit check

    else if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999))
        printf("The number %d is a triple-digit number.\n", num);
    else
        printf("The number %d is neither a double-digit nor a triple-digit number.\n", num);
}

int countDigits(int num) {
    num =  abs(num);
    int count = 0;
    while(num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

void checkDigits2(int num) {
    int digitCount = countDigits(num);

    if (digitCount == 1) {
        printf("The number %d is a single-digit number.\n", num);
    } else if (digitCount == 2) {
        printf("The number %d is a double-digit number.\n", num);
    } else if (digitCount == 3) {
        printf("The number %d is a triple-digit number.\n", num);
    } else {
        printf("The number %d is neither a double-digit nor a triple-digit number.\n", num);
    }
}
