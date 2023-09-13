// 실습 : 2-4.cpp

#include <stdio.h>

int main() 
{
    int i = 31;
    long j = 2147483647;
    double x = 131.274;

    printf ("%14d\n", i);
    printf ("%-14d\n", i);

    printf ("%ld\n", j);

    printf ("%14.1f\n", x);
    printf ("%14.3f\n", x);
    printf ("%14.3e\n", x);

    printf ("%f\n", x);
    printf ("%e\n", x);

    return 0;
}