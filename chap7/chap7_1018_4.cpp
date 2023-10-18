#include <stdio.h>

int main()
{
    int k[2][2] = {10, 20, 30, 40};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf ("%d, %p\n", k[i][j], &k[i][j]); // 주소차이 4씩 (int 4바이트)
        }
    }
}
