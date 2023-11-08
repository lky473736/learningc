#include <stdio.h>

int main()
{
    static int i = 6;
    {
        static int i = 14;
        printf ("%d\n", i);
    }
    printf ("%d", i);
}
