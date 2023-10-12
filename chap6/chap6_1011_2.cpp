#include <stdio.h>

#define MUL1(i) i * i 
#define MUL2(i) (i * i)

int main()
{
    int a = 2;
    
    printf ("%d\n", 200 / MUL1(a));
    
    printf ("%d", 200 / MUL2(a)); 
}
