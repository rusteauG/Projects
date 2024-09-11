
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void RollDice(void) {
     // Seed the random number generator with the current time
    //srand(time(0));
    srand(time(NULL)); // Seed the random number generator with the current time
    int randomNumber = rand();
    printf("Random Number: %d\n", randomNumber);
        // Print the value of RAND_MAX
    printf("RAND_MAX is: %d\n", RAND_MAX);
}
void RollDice1(void)
{
    srand(time(NULL));

    int lower = 1;
    int upper = 10;
    int randomNumber;
    for(int i =1; i<= 10;++ i)
    {
        randomNumber = ( rand() % ( upper - lower + 1)) + lower;
        printf("Random Number between %d and %d: %d\n", lower, upper, randomNumber);

    }
}

void RollDice3(void)
{
    srand(time(NULL)); //srand() seeds the random number generator with a value.
    // In this case, you're seeding it with the current time (time(NULL)), which changes every second.
    for(int i =1; i<= 10;++ i)
    {
        int dieRoll = (rand() % 6) + 1;
        printf("Roll %d: %d\n", i, dieRoll);
    }
}
void SixSidedDie(void)
{
srand(time(NULL));
    int  frequency1 = 0;
    int  frequency2 = 0;
    int  frequency3 = 0;
    int  frequency4 = 0;
    int  frequency5 = 0;
    int  frequency6 = 0;

    for(int roll = 1;roll <= 60000000;++roll)
    {

        int face = 1 + rand() % 6;
    switch(face) {
    case 1:
        ++frequency1;
        break;
    case 2:
        ++frequency2;
        break;
    case 3:
        ++frequency3;
        break;
    case 4:
        ++frequency4;
        break;
    case 5:
        ++frequency5;
        break;
    case 6:
        ++frequency6;
        break;

        }
    }

    printf("%s%13s\n","Face","Frequency");
    printf("   1%13d\n",frequency1);
    printf("   2%13d\n",frequency2);
    printf("   3%13d\n",frequency3);
    printf("   4%13d\n",frequency4);
    printf("   5%13d\n",frequency5);
    printf("   6%13d\n",frequency6);

}
