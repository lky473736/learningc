#include <stdio.h>

int main()
{
    int a = 0;
    
    while (1) 
    {
        a = a + 1;
        printf ("a => %d\n", a);
    }
    
    return 0;
}

/* 복습
조건이 1이면 True니깐 계속 무한반복한다.
C언어 계열에선 0이 아닌 모든 상수는 True이다.
    */
