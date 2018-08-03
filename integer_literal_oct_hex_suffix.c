#include <stdio.h>
//33

int main33()
{
    printf("0%lo\n", 017L);//long크기의 8진 정수 리터럴 
    printf("0%lo\n", 017UL); //unsigned
    printf("0x%lx\n", 0x7FFFFFL);//long 크기의 16진 정수 리터럴 
    printf("0x%lx\n", 0xFFFFFFFFUl); //unsigned long 크기의 16진수 리터럴

    return 0;
}
