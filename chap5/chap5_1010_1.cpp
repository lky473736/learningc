#include <stdio.h>

int main()
{
    int a = 0, b;
    
    while (a <= 10) 
    {
        b = a * a;
        printf ("%d * %d = %d\n", a, a, b);
        a++;
    }

    return 0;
}
