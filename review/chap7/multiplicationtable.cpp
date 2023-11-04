#include <stdio.h>

int main()
{
    int i, j, m = 0, n, k[243];
    
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            k[m] = j;
            k[m + 1] = i;
            k[m + 2] = j * i;
            m = m + 3;
        }
    }
    
    for (n = 0; n <= 80; n++)
    {
        printf("%d * %d == %d - %p\n", k[3 * n], k[3 * n + 1], k[3 * n + 2], &k[3 * n]);
    }
    
    return 0;
}
