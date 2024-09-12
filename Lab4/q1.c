#include <stdio.h>

int main(){

int num;
printf("Enter a number");
scanf("%d",&num);

if (num % 3 == 0){
  printf("number %d is a multiple of 3", num);
}
else {
printf("number %d is not a multiple of 3", num);
} 



return 0;
}