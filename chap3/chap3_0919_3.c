#include <stdio.h>

int main()
{
    int a = 0, c;
    
    c = a++;
    printf ("%d, %d\n", a, c); // 1, 0
    
    c = ++a;
    printf ("%d, %d", a, c); // 2, 2
    
    return 0;
}

/* 복습
pass*/
