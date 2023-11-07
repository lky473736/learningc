#include <stdio.h>

char w(char *k);

int main()
{
    char *k = "abc";
    w(k);
    return 0;
}

char w(char m[])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf ("%c\n", *(m + i));
    }
}
