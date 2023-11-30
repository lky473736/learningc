#include <stdio.h>

void S();

void main()
{
    static int i;
    scanf ("%d", &i);
    S();
    S();
}

void S()
{
    static int i;
    printf ("%d", i);
    scanf ("%d", &i);
    printf ("%d", i);
}

/* 복습
main함수에서 정적 변수 i 선언
i를 입력받음 (3이라 가정)
S 호출
i 선언 (main에서의 i랑은 당연히 다름 / 초기값 설정 안해줬기 때문에 0)
0 출력
i 입력받음 (1이라 가정)
1 출력
main으로 복귀 -> 다시 S 호출
i에 1이 들어있음 (static)
1 출력
다시 입력받음 (3이라 가정)
3 출력
*/
