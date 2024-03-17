/*#include <stdio.h>

void main()
{
    int arr[3][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}, {{9, 10}, {11, 12}}};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf ("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
}*/ 

#include <stdio.h>

void main()
{
    int arr[3][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}, {{9, 10}, {11, 12}}};
    int *p, m = 0;
    p = &arr[0][0][0];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf ("arr[%d][%d][%d] = %d\n", i, j, k, *(p + m));
                m += 1;
            }
        }
    }
}
