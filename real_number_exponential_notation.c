#include <stdio.h>

int main16()
{
    float num1 = 3.e5f; 
    double num2 = -1.3827e-2; 
    long double num3 = 5.21e+91; 

    printf("%f %f %Lf \n", num1, num2, num3);

    printf("%e %e %Le\n", num1, num2, num3);

    return 0;

}