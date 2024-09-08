#include <stdio.h>
#include <math.h>
#include <stdlib.h>  // For system()

// Function declarations
void menu();
void performOperation(char operation, double num1, double num2);
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int modulus(int a, int b);

int main(int argc, char **argv)
{
	char operation;
    double num1, num2;
	
while(1) {	
	

	menu();
	printf("Enter operation (+ , - , *, / , %% , ^ ) or Q to quit: ");
	scanf(" %c", &operation); // Space before %c to handle newline
	
	if(operation == 'Q' || operation == 'q') {
		printf("Exiting Calculator. Goodbye!\n");
		break;
	}
	
	if(operation =='%') {
		int n1,n2;
		printf("Enter tw0 integers: ");
		printf("Enter Number1: ");
		scanf("%d",&n1);
		printf("Enter Number2: ");
		scanf("%d",&n2);
				
		performOperation(operation, n1, n2);

	}else{
		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);
		performOperation(operation, num1, num2);
		}

		printf("\nPress Enter to continue...");
        getchar();  // Consume leftover newline character from previous input
        getchar();  // Wait for user to press Ent
		system("cls");  // Clear the screen before showing the menu on Windows

		}

	return 0;
}

void menu() {
	printf("\n--- Simple Calculator ---\n");
	printf("\n-------------------------\n");
    printf("Choose an operation:\n");
    printf("Addition       : +\n");
    printf("Subtraction    : -\n");
    printf("Multiplication : *\n");
    printf("Division       : /\n");
    printf("Modulus (int)  : %%\n");
    printf("Exponentiation : ^\n");
    printf("Quit           : Q\n\n");
}

void performOperation( char operation,double num1,double num2){
	switch(operation){
		case '+':
			printf("Result: %.2lf\n", add(num1, num2));
            break;
		case '-':
			printf("Result: %.2lf\n", subtract(num1, num2));
            break;
		case '*':
            printf("Result: %.2lf\n", multiply(num1, num2));
            break;	
		case '/':
			if(num2 ==0) {
			printf("Error: Division by zero is undefined.\n");
            } else {
			printf("Result: %.2lf\n", divide(num1, num2));	
			}
			break;
		case '%':
			if (num2 == 0) {  
			printf("Error: Modulus by zero is undefined.\n");
			} else {
			printf("Result: %d\n", modulus(num1, num2));  // Use directly as int
			}
			break;
		case '^':
			printf("Result: %.2lf\n", pow(num1, num2));
            break;	
		 default:
            printf("Invalid operation.\n");
            break;
			
	}
}

// Basic arithmetic functions
double add(double a , double b) {
	return a + b;
}

double subtract(double a ,double b){
	return a - b;
}
double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}