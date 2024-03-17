#include <stdio.h>

void exchange (int *v1, int *v2);

void main()
{
    int v1 = 0, v2 = 0;
    
    scanf ("%d %d", &v1, &v2);
    
    printf ("(original) v1 = %d, v2 = %d\n", v1, v2);
    
    exchange (&v1, &v2);
    
    printf ("(after) v1 = %d, v2 = %d\n", v1, v2);
}

void exchange (int *v1, int *v2)
{
    int finder;
    
    finder = *v1;
    *v1 = *v2;
    *v2 = finder;
}
