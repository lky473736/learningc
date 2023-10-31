#include <stdio.h>

int main()
{
    int k = 5, *p;
    p = &k;
    printf ("%p\n", *p); // 5
    *p = *p + 1;
    printf ("%d, %p", *p, p); // 6
}
