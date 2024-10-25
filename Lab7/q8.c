#include <stdio.h>

int main() {
    char expression[100];
    int result = 0, currentNumber = 0;
    char operation = '+';  
    int i = 0;

    printf("Enter an expression: ");
    gets(expression); 

    while (expression[i]!='\0') {
      
        if (expression[i]>='0' && expression[i]<= '9') {
            currentNumber=currentNumber * 10 + (expression[i] - '0');
        } 
     
        else if (expression[i] == '+' || expression[i] == '-') {

            if (operation == '+') {
                result += currentNumber;
            } else if (operation == '-') {
                result -= currentNumber;
            }

            operation = expression[i];
            currentNumber = 0;
        } else {
            printf("Invalid character in expression.\n");
            return 1;
        }
        i++;
    }

    if (operation == '+') {
        result += currentNumber;
    } else if (operation == '-') {
        result -= currentNumber;
    }

    if (expression[i - 1] == '+' || expression[i - 1] == '-') {
        printf("Invalid expression.\n");
    } else {
        printf("Result: %d\n", result);
    }

    return 0;
}
