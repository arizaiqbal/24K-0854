#include <stdio.h>

int main(){
float tax_rate;
int gross_salary;
printf("Enter tax rate:");
scanf("%f", &tax_rate);
printf("Enter your salary:");
scanf("%d", &gross_salary);
int net_salary;
net_salary = gross_salary * (1-tax_rate);
printf("Salary amount you will receive %d", net_salary);
return 0;
}