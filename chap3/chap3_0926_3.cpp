#include <stdio.h>

int main()
{
    int a, b, max;
    
    scanf ("%d %d", &a, &b);
    
    max = (a > b) ? a : b; \\ a > b이면 a, a <= b이면 b
    
    printf ("max = %d", max);
    
    return 0;
}
