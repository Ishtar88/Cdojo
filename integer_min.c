#include <stdio.h>
#include <limits.h>

int main11()
{
    char num1 = CHAR_MIN; //char�� �ּڰ�
    short num2 = SHRT_MIN; //short�� �ּڰ�
    int num3 = INT_MIN; //int�� �ּڰ�
    long num4 = LONG_MIN; //long�� �ּڰ�
    long long num5 = LLONG_MIN; //long long�� �ּڰ� 

    //char, short, int�� %d �� ����ϰ� long�� %ld, long long�� %lld�� ���
    printf("%d, %d, %d, %ld, %lld\n", num1, num2, num3, num4, num5);
    
}