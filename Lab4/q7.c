#include <stdio.h>

int main(){
    
    int customer_id;
    char customer_name [1024];
    float units, surcharge=0.00, bill_amount;

    printf("Enter Customer ID");
    scanf("%d", &customer_id);

    printf("Enter Customer Name:");
    scanf("%s", customer_name);

    printf("Enter units consumed:");
    scanf("%f",&units);

    if (units<= 199){
        bill_amount = units * 16.20;
    }
    else if (units >=200 && units < 300){
        bill_amount = units * 20.10;
    }
    else if (units >=300 && units < 500 ){
        bill_amount = units * 27.10;
    }
    else {
        bill_amount = units * 35.90;
    }

    if (bill_amount > 18000){
        surcharge = bill_amount * 0.15;
    }

    bill_amount = bill_amount + surcharge;

    printf("Customer ID:%d \n", customer_id); 
    printf("Customer Name: %s \n", customer_name); 
    printf("Units Consumed: %.2f \n", units); 
    printf("Total Bill : %.2f \n", bill_amount); 

      
    return 0;
}