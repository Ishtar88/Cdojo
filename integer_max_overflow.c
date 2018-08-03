#include <stdio.h>
#include <limits.h>

int main12()
{
    char num1 = CHAR_MAX + 1;
    short num2 = SHRT_MAX + 1;
    int num3 = INT_MAX + 1; 
    long long num4 = LLONG_MAX + 1;
    long num5 = LONG_MAX + 1;


    printf("%d, %d, %d, %lld, %ld\n", num1, num2, num3, num4, num5);

    unsigned char num6 = UCHAR_MAX + 1;
    unsigned short num7 = USHRT_MAX + 1;
    unsigned int num8 = UINT_MAX + 1;
    unsigned long long num9 = ULLONG_MAX + 1; 
    unsigned long num10 = ULONG_MAX + 1;

    printf("%u %u %u %llu %lu \n", num6, num7, num8, num9, num10);

    return 0;
}