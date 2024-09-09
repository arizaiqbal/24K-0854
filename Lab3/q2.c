#include <stdio.h> 

int main(){
int a,b,temp;
printf("Enter the number:");
scanf("%d",&a);

printf("Enter the number:");
scanf("%d",&b);

a = a + b;
b = a - b;
a= a-b;

printf("Swapped values are : %d %d",a,b);
return 0;
}
