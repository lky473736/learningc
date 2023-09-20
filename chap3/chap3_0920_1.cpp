#include <stdio.h>

int main()
{
    int i = 0xffff, j = 0xabcd;
    
    i = ~i;
    j = ~j;
    printf ("i = %x, j = %x\n", i, j);
    
    i = -32767;
    j = 32768;
    i = ~i;
    j = ~j;
    printf ("i = %d, j = %d\n", i, j);
    
    return 0;
}
