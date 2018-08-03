#include <stdio.h>

int main8()
{
    char num1 = 128; //char에 저장할 수 있는 최댓값 127보다 큰 수를 할당
                    //오버플로우 발생 
    //-128

    unsigned char num2 = 256; //unsigned char에 저장할 수 있는 최댓값 255보다 큰 수를 할당, 오버플로우 발생

    //0

    printf("%d %u \n", num1, num2);

    return 0; 
}