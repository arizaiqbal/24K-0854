#include <stdio.h>

int main(){
    float rate, interest, principal;
    int time ;

    printf("Enter principal amount (Note:It must be between 100Rs To 1,000,000 Rs):" );
    scanf("%f", &principal);
    
    printf("Enter interest rate (Note:It must be between 5percent to 10percent):" );
    scanf("%f", &rate);
    
    printf("Enter time period (Note:It must be between 1 to 10 years):" );
    scanf("%d", &time);

    interest = principal * rate * time/100;
    printf("Your interest rate is: %f Rs", interest);



    return 0;
}