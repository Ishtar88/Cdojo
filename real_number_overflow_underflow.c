#include <stdio.h>
#include <float.h>

int main19()
{
    float num1 = FLT_MIN; 
    float num2 = FLT_MAX; 

    //float�� ��� �ּڰ��� 100000000.0���� ������ ���� ���� ���� �Ǹ鼭 ����÷ο� �߻�
    num1 = num1 / 100000000.0f; 
    
    //float�� ��� �ִ񰪿� 1000.0�� ���ϸ� ������ �� �ִ� ������ �Ѿ�Ƿ� �����÷ο� �߻� 
    num2 = num2 * 1000.0f; 

    printf("%e %e\n", num1, num2);

    return 0; 
}