/*The do-while loop is better because a do-while loop ensures that the program runs atleast one time, which makes it ideal
  for scenarios where we need to check user input. For instance in the given scenario we have to ask for user-input until 
  use enters 0 so, we need to ask for user atleast once.Hence using do-while is suitable. */


#include <stdio.h>
int main(){
    
    int num, sum=0;

    do{
        printf("Enter a positive integer (0 to stop):");
        scanf("%d", &num);

        sum =sum + num;

        printf("Current sum:%d \n", sum);
    }    
    while(num!=0);
    printf("Final sum is:%d \n", sum);
    return 0;
}