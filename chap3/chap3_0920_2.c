#include <stdio.h>

int main()
{
    int i, v1, v2, v3, v4; // 4 byte
    char c; // 1 byte
    double d; // 8 byte
    
    v1 = sizeof(i + d); // double's byte > int's byte : 8
    v2 = sizeof c; // 1
    v3 = sizeof d; // 8
    v4 = sizeof("gachon"); // 7 (6 + null) 
    
    printf ("%d, %d, %d\n", sizeof i, sizeof c, sizeof d);
    printf ("%d, %d, %d\n", sizeof(int), sizeof(char), sizeof(double));
    printf ("%d, %d, %d\n", v1, v2, v3);
    printf ("%d", v4); // 6 + 1(널문자)
    return 0;
}

/* 복습
바이트 수가 a <= b일 때, sizeof(a + b)는 max(a, b)이다. (time complexity의 합연산과 비슷)
*/
