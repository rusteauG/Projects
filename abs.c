#include <stdio.h>
int ab(int);
// Value --> |Value|

int main()
{
    int num;
    printf("Enter Integer (whether Positive/Negative): ");
    scanf("%d", &num);

    if (num < 0)// Negative (-3)
        printf("The absolute value of %d is |%d|\n", num,  abs(num));
    else
        printf("The absoulte value of %d is |%d|\n", num, num);

    return 0;
}
int abs(int num) {
//own abs func
    if(num <0)
        num = num *(-1);
    return num;
}
