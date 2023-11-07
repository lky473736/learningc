/*
#include <stdio.h>

void k();

void main()
{
    int i = 6, j = 14;
    k();
    printf ("%d %d", i, j);
}

void k()
{
    int i = 37;
    printf ("%d\n", i);
}
*/

#include <stdio.h>

void k();

void main(int j)
{
    int i = 6;
    int l = 14;
    k(l);
    printf ("%d %d", i, l);
}

void k(int j)
{
    int i = 37;
    printf ("%d %d\n", i, j);
}
