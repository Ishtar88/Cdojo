#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main62()
{
    int num1;

    scanf("%d", &num1);

    int num2 = num1 % 10;

    num1 /= 10;

    int num3 = num1 % 10;

    num1 /= 10;

    int num4 =  num1 % 10; 

    num1 /= 10;

    int num5 = num1 % 10;

    num1 /= 10; 

    int num6 = num1 % 10;

    printf("%d %d %d %d %d \n", num2, num3, num4, num5, num6);

    return 0;
}