// 0913 과제 1 : 2-6 실습

#include <stdio.h>

int main()
{
    short int a = 32767, b = 100; // short : -32767~32767
    short int c;

    c = a + b;

    printf ("%d", c); // 이상한 값 출력 (메모리 문제로 인한 overflow 때문)

    return 0;
}