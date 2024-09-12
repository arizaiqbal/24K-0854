/* Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement. */

#include <stdio.h>

int main(){
 
char operator;
int a,b, result;

printf("Enter an operator:");
scanf("%c", &operator);

printf("Enter a number:");
scanf("%d", &a);


printf("Enter a number:");
scanf("%d", &b);


switch(operator){
	case '+':
		result = a + b;
		printf("Sum of two numbers is: %d", result);
	break;
	
	case '-':
		result = a - b;
		printf("Difference of two numbers is: %d", result);
	break;
	
	case '*':
		result = a * b;
		printf("Multiplication of two numbers is: %d", result);
	break;
	
	case '/':
		if (b !=0){
		result = a / b;
		printf("Division of two numbers is: %d", result);}
		else{
			printf("Division by zero is not possible");
		}
	break;
	
	default:
		printf("Invalid operator");
}


return 0;
}