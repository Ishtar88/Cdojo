#include <stdio.h>

int main6()
{
    char num1 = -10;    //1 ����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� �� �Ҵ� 
    short num2 = 30000; //2 ����Ʈ ��ȣ�ִ� ���������� ������ �����ϰ� �� �Ҵ� 
    int num3 = -1234567890;//4 ����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� �� �Ҵ� 
    long num4 = 1234567890;//4 ����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� �� �Ҵ� 
    long long num5 = -1234567890123456789;//8����Ʈ ��ȣ �ִ� ���������� ������ �����ϰ� �� �Ҵ� 


    //char, shord, int�� %d�� ����ϰ� long�� %ld, long long�� %lld�� ���
    printf("%d %d %d %ld %lld \n", num1, num2, num3, num4, num5);

    return 0;
}