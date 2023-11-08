#include <stdio.h>

void main()
{
    static int i;
    auto int j = 6; // auto 생략
    printf ("%d %d", i, j);
}
