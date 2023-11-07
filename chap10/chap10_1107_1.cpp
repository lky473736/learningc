#include <stdio.h>

int main()
{
    int i = 6, j = 31;
    printf ("%d %d\n", i, j);
    {
        int i = 14;
        printf ("%d %d\n", i, j);
    }
    printf ("%d %d\n", i, j);
    return 0;
}
