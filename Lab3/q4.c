#include <stdio.h>

int main(){
    float fuelAvg, fuelConsumedFwd, fuelConsumedReturn;
    float fuelCostFwd, fuelCostReturn, totalFuelConsumed, totalFuelCost;
    int distance = 1207;  
    float priceFwd = 118;  
    float priceReturn= 123;   

    printf("Enter the car's fuel average (KM PER LITRE):");
    scanf("%f",&fuelAvg);

    fuelConsumedFwd = distance / fuelAvg;
    fuelConsumedReturn = distance / fuelAvg;

    fuelCostFwd = fuelConsumedFwd * priceFwd;
    fuelCostReturn = fuelConsumedReturn * priceReturn;


    totalFuelConsumed = fuelConsumedFwd + fuelConsumedReturn;
    totalFuelCost = fuelCostFwd + fuelCostReturn;


    printf("Total fuel consumed (both ways): %.2f liters\n", totalFuelConsumed);
    printf("Total fuel cost (both ways): %.2f\n", totalFuelCost);


    return 0;
}