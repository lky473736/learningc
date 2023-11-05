#include <stdio.h>

void main()
{
    int *p, i;
    
    int K[] = {1, 2, 3, 4, 5};
    
    p = &K[4];
    i = 4;
    
    do
    {
        printf ("K[%d] = %d\n", i, *p);
        
        p--;
        i--;
    } while (i != -1);
}
