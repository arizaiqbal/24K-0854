#include <stdio.h>

int main()
{
    int start, end, is_prime;

    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (i < 2)
            continue;
        is_prime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}