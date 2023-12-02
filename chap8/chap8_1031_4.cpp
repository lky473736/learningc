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
}

/* 복습
포인터를 이용하여 쉽게 배열값을 출력할 수 있다.
2차원이든, 3차원이든, n차원이든 모든 원소들은 연속적으로 주소값을 지니고 있다.
예를 들어서, 위와 같은 {1, 2, 3, 4}, {5, 6, 7, 8}은 서로 다른 행에 위치하고 있지만
실질적으로는 주소가 4바이트씩 일정하게 차이가 나기 때문에 포인터를 이용하여 구할 수 있다.

#include <stdio.h>

int main()
{ // 3차원 배열
    int k[2][2][2] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int i, j, l, *p;
    
    int n = 0;
    
    p = k;
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (l = 0; l < 2; l++)
            {
                printf ("%d, %p\n", *(p + n), p + n);
                n++;
            }
        }
    }
}
*/
