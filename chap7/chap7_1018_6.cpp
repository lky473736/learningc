#include <stdio.h>

int main()
{
    int k[2][2] = {10, 20, 30, 40};
    int *p, n = 0;
    
    p = k[0];
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf ("%d, %p\n", k[i][j], (p + n)); // 주소차이 4씩 (int 4바이트) + 포인터형 주소에 +1하기 위해 n++
            n = n + 1;
        }
    }
}

/* 복습
*p == 10
*(p + 1) == 20
*(p + 2) == 30
*(p + 3) == 40
*/
