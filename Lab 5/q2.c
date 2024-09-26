#include <stdio.h>

int main() {
    int weekday, vacation, sleepIn;

    
    printf("Is it a weekday? (0 for false, 1 for true): ");
    scanf("%d", &weekday);

    printf("Are you on vacation? (0 for false, 1 for true): ");
    scanf("%d", &vacation);

    if (weekday < 0 || weekday > 1 || vacation < 0 || vacation > 1) {
        printf("Invalid input");
    }

    sleepIn = (weekday == 0) || (vacation == 1);


    printf("sleepIn(%d, %d) then %d\n", weekday, vacation, sleepIn);

    return 0;
}
