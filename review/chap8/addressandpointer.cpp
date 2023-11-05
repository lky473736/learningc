/*#include <stdio.h>

void main()
{
    char K[3] = "ad";
    char *p;
    
    p = &K[0];
    
    printf ("%c", *p);
}*/

#include <stdio.h>

void main()
{
    int k = 5, *p;
    
    p = &k;
    
    printf ("%d", *p);
}
