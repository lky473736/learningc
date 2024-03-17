#include <stdio.h>

int main()
{
    static int i = 6;
    {
        static int i = 14;
        printf ("%d\n", i);
    }
    printf ("%d", i);
}

/* 복습
static도 auto와 마찬가지로 brace 기호에 주의한다.
*/
