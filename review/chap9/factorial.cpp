/* (ver. not reculsive)
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
*/

#include <stdio.h>

int fact(int k);

void main(void)
{
    int num = 0;
    scanf ("%d", &num);
    
    for (int i = 0; i <= num; i++) 
    {
        printf ("%d! = %d\n", i, fact(i));
    }
}

int fact (int k)
{
    if (k == 0)
    {
        return 1;
    }
    
    else
    {
        return k * fact(k - 1);
    }
}
