#include <stdio.h>

int main9()
{
    int num1 = 0; 
    int size;
    int size1;

    size = sizeof num1; //���� num1�� �ڷ��� ũ�⸦ ����
    size1 = sizeof(int);

    printf("num1�� ũ�� : %d\n", size);
    printf("num1�� ũ�� : %d\n", size1);


    return 0;
}