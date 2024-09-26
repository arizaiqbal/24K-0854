#include <stdio.h>
int main()
{
int x;
x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    printf("Value of x:%d",x);
    return 0;
}

/*The output will be 30 because of operator precedence.
Firstly, it checks the outermost condition which is false so it move towards else statement,
in else block it will check 2<5 first because according to operator precedence <,> comes before == and != ,
since 2 < 5 is true so it gives 1. Then it checks 1 !=2 which is false so it moves to else block and the output becomes 30 */