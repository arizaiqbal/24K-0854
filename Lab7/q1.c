/* Create a program that takes an array of size 6 and shifts all its elements to the right
by one position. The last element should move to the first position.
Input: {1,2,3,4,5,6}
Output: {6,1,2,3,4,5} */

#include <stdio.h>
int main(){
    int arr[6];
 
    for (int i=0; i<6; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
       int lastElement = arr[5];

    for(int i=5; i>0; i--){
        arr[i] = arr[i - 1];
    }
    
    arr[0] = lastElement;

    printf("Shifted array: ");
     for(int i= 0; i<6; i++){
        printf("%d ", arr[i]);
    }

         
    return 0;
}