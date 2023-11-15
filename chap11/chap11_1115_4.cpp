#include <stdio.h>

typedef union list {
    int a;
    char b; // 기억장소를 공유함
} LST;

int main()
{
    typedef int jungsu; // 새로운 자료형 타입 만듬 (jungsu라는 자료형)
    
    LST k;
    k.a = 97;
    printf ("%d %c\n", k.a, k.b); // k.a랑 k.b가 동일한 값을 지니면서 97 a 출력 
    k.a = 100;
    printf ("%d %c\n", k.a, k.b);
    
    jungsu m = 37; // jungsu == int으로 형선언
    printf ("%d", m);
}
