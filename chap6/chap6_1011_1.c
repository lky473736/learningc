#include <stdio.h>

#define NUM 31
#define MSG "GCU\n"
#define SU NUM * NUM
#define PR printf ("NUM => %d\n", i);
#define PRC "NUM => %d\n"

int main(void)
{
    char a = 'k';
    int i = NUM; // i == 31
    
    PR;
    
    i == SU;
    
    printf (PRC, i);
    
    printf ("%s", MSG);
    printf ("MSG"); // 위는 MSG 출력, 아래는 출력 안됨
    
    return 0;
}

/* 복습
source program -> object program -> load module -> 실행 과정에서 object program이 load module이 되는 과정을 link라고 한다.
각종 사용자 정의 매크로 및 선언한 라이브러리는 이 link 과정에서 개방 및 확장되어 삽입되게 된다. 본 과정을 open sub-routine이라고 한다.

사용자 정의 매크로는 아래와 같은 방식으로 구현할 수 있다.

#define 매크로명 식, 함수식, 문자열, 문자...

참고로, python의 lambda를 c언어에서 구현할 수 있는데, 예를 들어,

#define SUM(a, b) a + b

위의 매크로는 사실상 아래의 함수와 동일한 역할을 한다.

int sum (int a, int b)
{
    return a + b;
}
*/
