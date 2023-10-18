#include <stdio.h>

int main()
{
    char k[10];
    
    k[9] = '\0'; // 널문자 입력
    
    gets(k); // 한 행의 문자열 입력
    
    puts(k); // 한 행의 문자열 출력
}
