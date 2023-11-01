#include <stdio.h>

void K(); // K라는 사용자 지정 함수 선언

// void = 함수 수행 시 return 명령문을 사용하지 않는 경우

int main()
{
    K();
    return 0;
}

void K()
{
    printf ("gachon\n");
    main(); // main 함수 호출 <- 이래도 무한반복됨
}
