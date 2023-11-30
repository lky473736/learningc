#include <stdio.h>

#define MUL1(i) i * i 
#define MUL2(i) (i * i)

int main()
{
    int a = 2;
    
    printf ("%d\n", 200 / MUL1(a));
    
    printf ("%d", 200 / MUL2(a)); 
}

/* 복습
위 MUL1, MUL2처럼 lambda식처럼 (작은 함수처럼) 구현 가능하다.
사실 함수라고 보기엔 어렵다. 왜냐면,
    
#define 매크로명 매크로식

이라고 가정할 때, 단지 매크로명은 매크로식을 대신할 대명사 같은 역할을 하는 것이다.
    
printf ("%d\n", 200 / MUL1(a));    
printf ("%d", 200 / MUL2(a)); 이 두 결과는 다르다.
*/
