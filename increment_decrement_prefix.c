//48

#include <stdio.h>

int main48()
{
    int num1 = 2; 
    int num2 = 2;
    int num3; 
    int num4;

    num3 = ++num1;
    num4 = --num2;

    printf("%d %d\n", num3, num4); //3 1

    return 0;
}