#include <stdio.h>

int main()
{
    int k = 31, *p, **pp;
    p = &k;
    pp = &p;
    printf ("%p %p\n", p, pp);
    
    (*p)++;
    printf ("%d %d %d\n", k, *p, **pp);
    
    (**pp)++;
    printf ("%d %d %d\n", k, *p, **pp);
    
    return 0;
}
