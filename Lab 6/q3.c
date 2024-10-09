#include <stdio.h>

int main() {
    int num, isPrime = 1;
    int a = 0, b = 1, c = 0;

 
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i <= num / 2; i++) {  
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Number is prime\n");

       
        printf("Series is = %d %d ", a, b);

        c = a + b;
        while (c <= num) {
            printf("%d ", c);
            a = b;
            b = c;
            c = a + b;
        }
        printf("\n");
    } else {
        printf("Number is not prime\n");
    }

    return 0;
}
