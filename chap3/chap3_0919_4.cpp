#include <stdio.h>

int main()
{
    int i = 6 + 31;
    double j = 3.1 * 2.0;
    char k = 'k' + 1; // k = l
    
    i %= 6; // i = i % 6
    
    printf ("%d\n", i);
    printf ("%f\n", j); // 6.200000
    printf ("%c", k);
    
    return 0;
}
