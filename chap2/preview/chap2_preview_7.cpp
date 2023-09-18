#include <stdio.h>

int main()
{
    short int a = 32767, b = 100;
    short int c;
    
    c = a + b;
    printf ("c = %d", c); // -의 값 출력. short 범위를 벗어났기 때문. (overflow)
    
    return 0;
}
