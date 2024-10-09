#include <stdio.h>

int main() {
    int num, OGNum, rem, result = 0;
  
    printf("Enter a number: ");
    scanf("%d", &num);

    OGNum = num;  

    while (OGNum != 0) {
        rem = OGNum % 10;  
        result += rem * rem * rem;  
        OGNum /= 10; 
    }

  
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
