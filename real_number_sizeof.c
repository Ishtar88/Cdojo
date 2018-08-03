#include <stdio.h>

int main17()
{
    float num1 = 0.0f;
    double num2 = 0.0;
    long double num3 = 0.01;

    printf("float : %d, double : %d, long double : %d\n",
        sizeof(num1),
        sizeof(num2),
        sizeof(num3)
    );
    return 0;
};