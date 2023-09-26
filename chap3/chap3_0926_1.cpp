#include <stdio.h>

int main()
{
    int i = 1, j = 4, k;
    
    k = i << 6;
    printf ("%d\n", k);
    
    k = j >> 2;
    printf ("%d\n", k);
    
    k = 1 << 2;
    printf ("%d\n", k);
    
    k = 4096 >> 2;
    printf ("%d\n", k);
    
    return 0;
}
