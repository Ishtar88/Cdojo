//47

#include <stdio.h>

int main47()
{
    int num1 = 2;
    int num2 = 2; 
    int num3;
    int num4; 

    num3 = num1++; 
    num4 = num2++;
    printf("%d\n", num3); //2 
    printf("%d \n", num4); //2 
    int num5 = num1 + num2; //3+3
    printf("%d\n", num5);
    

    return 0; 
}