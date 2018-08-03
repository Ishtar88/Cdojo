#include <stdio.h>

int main9()
{
    int num1 = 0; 
    int size;
    int size1;

    size = sizeof num1; //변수 num1의 자료형 크기를 구함
    size1 = sizeof(int);

    printf("num1의 크기 : %d\n", size);
    printf("num1의 크기 : %d\n", size1);


    return 0;
}