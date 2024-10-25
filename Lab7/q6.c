#include <stdio.h>

int main() {
    int arr[10];
    int frequency[10]={0};  
    int i, j;

    printf("Enter 10 integers:\n");
    for (i = 0; i<10; i++) {
        scanf("%d",&arr[i]);
    }

  
    for (i = 0; i<10; i++) {
        int count = 1; 

        if (frequency[i] == -1) {
            continue;
        }
        
        for (j =i+1; j<10; j++) {
            if (arr[i]==arr[j]) {
                count++;
                frequency[j] = -1;  
            }
        }
        frequency[i] = count;
    }

    
    printf("\nFrequency of each element:\n");
    for (i = 0; i<10; i++) {
        if (frequency[i] != -1) {
            printf("%d occurs %d times\n", arr[i], frequency[i]);
        }
    }

    return 0;
}
