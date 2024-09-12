/*An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it is  more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.*/

#include <stdio.h>

int main(){
	
	int cost,discount,saved_amt,cost_discount,amt_discount;
	float discount_amt;
	printf("Enter cost of shopping: ");
	scanf("%d", &cost);
	
	if (cost < 500){
		printf("Discount not applicable");
	}
	    else if (cost < 2000){
        printf("Actual amount: %d \n", cost);
		discount=(cost * 5)/100;
		saved_amt = (cost * 5)/100;
		amt_discount = cost - saved_amt;
		printf("Saved amount: %d \n", saved_amt);
		printf("Amount after discount: %d", amt_discount);
	}
		else if (cost > 2000 && cost < 4000){
        printf("Actual amount: %d \n", cost);
		discount=(cost * 10)/100;
		saved_amt = (cost * 10)/100;
		amt_discount = cost - saved_amt;
		printf("Saved amount: %d \n", saved_amt);
		printf("Amount after discount: %d", amt_discount);
	}
		else if (cost > 4000 && cost < 6000){
        printf("Actual amount: %d \n", cost);
		discount=(cost * 20)/100;
		saved_amt = (cost * 20)/100;
		amt_discount = cost - saved_amt;
		printf("Saved amount: %d \n", saved_amt);
		printf("Amount after discount: %d", amt_discount);
	}
		else if (cost > 6000){
        printf("Actual amount: %d \n", cost);
		discount=(cost * 35)/100;
		saved_amt = (cost * 35)/100;
		amt_discount = cost - saved_amt;
		printf("Saved amount: %d \n", saved_amt);
		printf("Amount after discount: %d", amt_discount);
	}
	return 0;
}