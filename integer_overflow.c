#include <stdio.h>

int main8()
{
    char num1 = 128; //char�� ������ �� �ִ� �ִ� 127���� ū ���� �Ҵ�
                    //�����÷ο� �߻� 
    //-128

    unsigned char num2 = 256; //unsigned char�� ������ �� �ִ� �ִ� 255���� ū ���� �Ҵ�, �����÷ο� �߻�

    //0

    printf("%d %u \n", num1, num2);

    return 0; 
}