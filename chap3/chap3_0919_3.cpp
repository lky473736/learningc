#include <stdio.h>

int main()
{
    int a = 0, c;
    
    c = a++;
    printf ("%d, %d\n", a, c);
    
    c = ++a;
    printf ("%d, %d", a, c);
    
    return 0;
}
