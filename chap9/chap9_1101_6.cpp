#include <stdio.h>

void ex (int *v1, int *v2);

int main()
{
    int v1 = 5, v2 = 6;
    ex (&v1, &v2);
    printf ("v1 = %d, v2 = %d", v1, v2);
}

void ex (int *v1, int *v2)
{
    int z;
    z = *v1; // z = 5
    *v1 = *v2; // v1 = 6
    *v2 = z; // v2 = 5
}
