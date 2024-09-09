#include <stdio.h>

void convertTime(int totalSeconds){
    int hours,minutes,seconds;
    //Calculate hours
    hours = totalSeconds / 3600;
    // Calculate remaining minutes
    minutes = (totalSeconds % 3600) / 60;
    // Calculate remaining seconds
    seconds = totalSeconds % 60;
    // Display the result
    printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds.\n", totalSeconds, hours, minutes, seconds);
}

int main()
{
    int totalSeconds;

    // Input the number of seconds from the user
    printf("Enter the number of seconds: ");
    scanf("%d", &totalSeconds);

    // Call the function to convert and display the time
    convertTime(totalSeconds);

    return 0;
}


