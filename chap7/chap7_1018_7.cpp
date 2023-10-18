#include <stdio.h>

int main()
{
    int k[2][2] = {{10}, {20}}; // 10 0 20 0 (brace로 묶는 것이 한 행을 대체하는 것임)
    // 10 0
    // 20 0
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
