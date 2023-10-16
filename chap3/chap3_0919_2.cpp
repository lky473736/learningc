#include <stdio.h>

#define PRN (i, j); printf("i -> %d, j -> %d \n\n", i, j);

int main()
{
    int i, j = 6;
    
    i = j++ + 3; 
    PRN (i, j); // i = 9, j = 7
    
    i = ++j; 
    PRN (i, j); // i = 8, j = 8
    
    return 0;
}
