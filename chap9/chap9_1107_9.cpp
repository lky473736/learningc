#include <stdio.h>

char p(char k[2][4]);

void main()
{
    char k[2][4] = {"abc", "def"};
    p(k);
}

char p(char k[2][4])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf ("%c", k[i][j]);
        }
        
        printf ("\n");
    }
}
