#include <stdio.h>

int main()
{
    int i, v1, v2, v3, v4;
    char c;
    double d;
    
    v1 = sizeof(i + d); // double's byte > int's byte
    v2 = sizeof c;
    v3 = sizeof d;
    v4 = sizeof("gachon");
    
    printf ("%d, %d, %d\n", sizeof i, sizeof c, sizeof d);
    printf ("%d, %d, %d\n", sizeof(int), sizeof(char), sizeof(double));
    printf ("%d, %d, %d\n", v1, v2, v3);
    printf ("%d", v4); // 6 + 1(널문자)
    return 0;
}
