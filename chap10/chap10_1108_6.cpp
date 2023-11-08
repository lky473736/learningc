#include <stdio.h>

void S();

void main()
{
    static int i;
    scanf ("%d", &i);
    S();
    S();
}

void S()
{
    static int i;
    printf ("%d", i);
    scanf ("%d", &i);
    printf ("%d", i);
}
