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

/* 복습 
배열을 argument로 받을 때 반드시 배열 명을 대입해야 하는 것을 주의
*/
