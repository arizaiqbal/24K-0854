#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

 
    (num % 10 == 0) ? printf("Last Digit is Zero\n") : printf("Last Digit Non-Zero\n");

    return 0;
}
