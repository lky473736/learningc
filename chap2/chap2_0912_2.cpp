// 실습 2 : 2-5.cpp

#include <stdio.h>

int main() 
{
    char ch = 'C';

    double afkn = 123.45;

    int kbs = 456;
    int sbs = 123;

    double a = 1.4567890123;

    printf ("%c PROGRAM\n", ch);
    printf ("afkn = %f\n", afkn); // 123.450000
    printf ("kbs = %d\nsbs = %d\n", kbs, sbs);
    
    printf ("a = %f\n", a); // 1.456789 (나머지 소수점 버림)
    printf ("a = %e\n", a); 

    return 0;
}
