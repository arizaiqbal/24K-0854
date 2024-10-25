#include <stdio.h>

int main(){
    int size,num;
   

    printf("Enter size of an array: ");
    scanf("%d", &size);

     int arr[size];

    if (size > 100 || size <0){
        printf("Invalid size, Please enter number between 1 and 100");
    }

     for (int i=0; i<size; i++){
        printf("Element %d ", i+1);
        scanf("%d", &arr[i]);
     }

 int freq[size];     
    for (int i=0; i<size; i++){
        freq[i]=0;
    }

    for (int i=0; i<size; i++){
         if (freq[arr[i]]==1){
            printf("%d occurs more than once. \n", arr[i]);
            break;
         }

     freq[arr[i]]++;
    }

    return 0;
}