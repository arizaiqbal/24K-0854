#include <stdio.h>

int main() {
    char coffee, cup;
    int time = 0;
    float coffee_time;

    printf("Enter type of coffee\nB for black and W for white: ");
    scanf(" %c", &coffee);

    switch (coffee) {
        case 'B':
        case 'b':
            printf("Add pure water: 20 mins\n");
            time += 20;
            printf("Add sugar: 20 mins\n");
            time += 20;
            printf("Mix well: 25 mins\n");
            time += 25;
            printf("Add coffee: 15 mins\n");
            time += 15;
            printf("Mix well: 25 mins\n");
            time += 25;
            
            printf("Enter cup size (S for single, D for double): ");
            scanf(" %c", &cup);

            switch (cup) {
                case 'S':
                case 's':
                    printf("Time taken to prepare single black coffee is %d minutes\n", time);
                    break;

                case 'D':
                case 'd':
                    coffee_time = time + (time * 0.5);
                    printf("Time taken to prepare double black coffee is %.2f minutes\n", coffee_time);
                    break;

                default:
                    printf("Invalid cup size\n");
            }
            break;

        case 'W':
        case 'w': 
            printf("Add pure water: 15 mins\n");
            time += 15;
            printf("Add sugar: 15 mins\n");
            time += 15;
            printf("Mix well: 20 mins\n");
            time += 20;
            printf("Add coffee: 2 mins\n");
            time += 2;
            printf("Add milk: 4 mins\n");
            time += 4;
            printf("Mix well: 20 mins\n");
            time += 20;

            printf("Enter cup size (S for single, D for double): ");
            scanf(" %c", &cup);

            switch (cup) {
                case 'S':
                case 's':
                    printf("Time taken to prepare single white coffee is %d minutes\n", time);
                    break;

                case 'D':
                case 'd':
                    coffee_time = time + (time * 0.5);
                    printf("Time taken to prepare double white coffee is %.2f minutes\n", coffee_time);
                    break;

                default:
                    printf("Invalid cup size\n");
            }
            break;

        default:
            printf("Invalid coffee type\n");
    }

    return 0;
}
