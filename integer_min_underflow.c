#include <stdio.h>
#include <limits.h>

int main13()
{
    char num1 = CHAR_MIN + 1;
    short num2 = SHRT_MIN + 1;
    int num3 = INT_MIN + 1;
    long long num4 = LLONG_MIN + 1;
    long num5 = LONG_MIN + 1;


    printf("%d, %d, %d, %lld, %ld\n", num1, num2, num3, num4, num5);

    unsigned char num6 = 0 - 1;
    unsigned short num7 = 0 - 1;
    unsigned int num8 = 0 - 1;
    unsigned long long num9 = 0 - 1;
    unsigned long num10 = 0 - 1;

    printf("%u %u %u %llu %lu \n", num6, num7, num8, num9, num10);

    return 0;
}