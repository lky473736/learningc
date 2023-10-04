#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    
k:  i += 1;
    sum += i;
    
    if (i < 10) 
    {
        goto k;
    }
    
    printf ("%d", sum);
    
    return 0;
}
