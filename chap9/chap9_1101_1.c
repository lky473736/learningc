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
    K(); // 자기 자신을 호출하는 함수 (recursive call) -> 이 경우에는 gachon이 무한반복된다 
}

/* 복습
함수란 수차례 반복되는 기능을 따로 선언하여 축약하여 표현할 수 있도록 한 수단이다.
함수는 기본적으로 input, output(return값), 함수 안 procedure로 구성된다.
main함수 이후로 사용자 지정 함수를 작성할 때 사용하는 input값을 parameter (가인수) 라고 하며,
실제로 사용자가 함수에 입력하는 수가 argument (실인수)라고 지칭한다.

함수는 기본적으로 아래와 같은 형식을 가진다.

함수 선언
main()...
return값의 형 선언 함수명 (parameter) 
{
    함수 기능 설명
    return ~~
}

위 예시는 자기 자신을 호출하는 recursive call의 예시이고, 이를 재귀함수라고 불린다. 만약에 16번 줄에 main()이라고 사용하였어도 gachon이 무한반복 되었을 것이다.
하지만 이를 recursive call이라고 불리울 수 없는데, 그 이유는 자기 자신을 반복하지 않았기 때문이다.
*/
    
