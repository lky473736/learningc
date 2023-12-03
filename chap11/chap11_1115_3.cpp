#include <stdio.h>

union list {
    int a;
    char b; // 기억장소를 공유함
};

int main()
{
    typedef int jungsu; // 새로운 자료형 타입 만듬 (jungsu라는 자료형)
    
    union list k;
    k.a = 97;
    printf ("%d %c\n", k.a, k.b); // k.a랑 k.b가 동일한 값을 지니면서 97 a 출력 
    k.a = 100;
    printf ("%d %c\n", k.a, k.b);
    
    jungsu m = 37; // jungsu == int으로 형선언
    printf ("%d", m);
}

/* 복습
새로운 형을 선언하기 위해서 typedef를 사용한다.

typedef 형선언 형명;

예를 들어서, 
typedef int daramji;

이러면 이젠 int 대신 daramji라는 형 선언을 할 수 있다.

daramji a;
int a;

는 서로 같은 형 선언이 된다.
*/
