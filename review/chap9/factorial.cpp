#include <stdio.h>

int fact (int k);

void main()
{
    int num = 0;
    scanf ("%d", &num);
    printf ("factorial num = %d", fact(num));
}

int fact (int k) 
{
    int finder = 1;
    
    do
    {
        finder *= k;
        k--;
    } while (k > 1);
    
    return finder;
}
