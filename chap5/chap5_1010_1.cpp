#include <stdio.h>

int main()
{
    int a = 0, b;
    
    while (a <= 10) 
    {
        b = a * a;
        printf ("%d * %d = %d\n", a, a, b);
        a++;
    }

    return 0;
}

/* 복습
반복문의 종류는 while문, for문, do-while문이 있으며, goto문은 제어문이지만 제어 변경을 잘 하면 반복문처럼 사용할 수 있다.
while문과 for문의 차이점은 변수 초기화를 조건 판정부에서 하느냐, 안하느냐의 차이다.
또한 for문은 특정 범위 내에서 반복, while문은 조건이 참이면 계속 반복한다는 특징이 있다.
*/
