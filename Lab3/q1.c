#include <stdio.h>

int main(){

    /*The code writen below will display the wrong value because it is out of int datatype range which is ( -2,147,483,648 to 2,147,483,647 )*/

    int testInteger = 3000000000;
    printf("Number is %d \n",testInteger);

  

    float num = 3000000000;
    printf("Number is %f",num);   /*This is the correct version because the range of float datatype is (±3.4 × 10^38)*/


    return 0;
}