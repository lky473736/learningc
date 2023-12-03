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

/* 복습
출력 
abc
def

이를 포인터로 처리할 수 있다. 애초에 2차원 배열이든, 3차원 배열이든, 모든 값은 메모리에 서로 일렬로 나열되기 때문.

char p(char k[2][4])
{
    int i, j, p = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf ("%c", *(k[0] + p));
            p++;
        }
        
        printf ("\n");
    }
}

배열의 시작 주소는 k가 아니라 k[0]이다. 배열에서 포인터 사용 시에 배열의 구조를 먼저 그리고 파악할 것.
*/
