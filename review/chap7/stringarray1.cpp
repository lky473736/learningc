#include <stdio.h>

void main()
{
    char K[] = "daramji";
    for (int i = 0; i < 8; i++)
    {
        printf ("K[%d] = %c - %p\n", i, K[i], &K[i]);
    }
}
