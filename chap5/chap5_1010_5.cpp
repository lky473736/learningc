#include <stdio.h>

int main()
{
    char c;
    
    do 
    {
        c = getchar();
        putchar(c);
    }
    while (c != '\n');
    
    return 0;
}

/* 복습
예시로, c에 3을 입력하는 순간 c엔 3이 저장되고, 
enter를 입력하는 순간 개행문자가 c에 저장되어 종료된다.
한 문자를 표현할 땐 반드시 작은 따옴표를 사용할 것. 큰 따옴표는 오류를 야기한다.
*/
