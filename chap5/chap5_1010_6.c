#include <stdio.h>

int main()
{
    char c;
    
    while ((c = getchar()) != '\n') // EOF
    {
        putchar(c);
    }
    
    return 0;
}

/* 복습
이 코드도 전의 코드랑 마찬가지. 개행 문자를 처리해주기 위해선 아래와 같은 처리를 해주어야 한다.

    #include <stdio.h>

int main()
{
    char c;
    
    while ((c = getchar()) != '\n') // EOF
    {
        int _ = getchar();
        putchar(c);
    }
    
    return 0;
}
*/
