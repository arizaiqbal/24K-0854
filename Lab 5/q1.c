#include <stdio.h>

int main() {
    float Calories, fatGrams, caloriesFromFat, percentage;

    printf("Enter the total number of calories in the food: ");
    scanf("%f", &Calories);

    if (Calories < 0) {
        printf("Error: Total calories cannot be less than 0.\n");
        return 1;
    }

    printf("Enter the number of fat grams in the food: ");
    scanf("%f", &fatGrams);

    if (fatGrams < 0) {
        printf("Fat grams cannot be less than 0.\n");
        return 1;
    }

    caloriesFromFat = fatGrams * 9;

    if (caloriesFromFat > Calories) {
        printf("Error: Calories from fat cannot be greater than total calories.\n");
        return 1;
    }

    percentage = (caloriesFromFat / Calories) * 100;

    printf("The percentage of calories from fat is %.2f%%.\n", percentage);

    return 0;
}