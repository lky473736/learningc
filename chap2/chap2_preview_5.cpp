#include <stdio.h>
#include "stdafx.h" // (windows 전용 라이브러리) precompiled header : 컴파일 하기 전에 미리 자주 쓰는 헤더파일들을 컴파일해둬서 컴파일 속도가 빨라짐

int main()
{
    int a, b;
    
    a = 10;
    b = 20;
    
    printf ("a + b = %d\n", a + b);
    
    return 0;
}
