#include <stdio.h>

int main()
{ // 3차원 배열
    int k[2][2][2] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int i, j, l, *p;
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (l = 0; l < 2; l++)
            {
                printf ("%d, %p\n", k[i][j][l], &k[i][j][l]);
            }
        }
    }
