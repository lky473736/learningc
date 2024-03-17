/*
  1) https://m.blog.naver.com/eheh1000/221377598860
     실인수란, 함수를 호출할 때 넘겨지는 값이며
     가인수란, 함수를 선언할 때의 변수이다. 예를 들어

     int func (int v1);
     main ...
     func (3);

     이때 실인수는 3, 가인수는 v1이다.

  2) 값에 의한 함수 호출은 함수 호출 시 실인수를 실제 값으로 하는 것이며,
     주소에 의한 함수 호출은 함수 호출 시 실인수를 주소값으로 하는 것이다. 예를 들어

     void func_realvalue (int v1);
     main ...
     func_realvalue (3);

     이러면 실제로 존재하는 값 3으로 함수를 호출하는 것이기에 값에 의한 함수 호출이라 할 수 있으며,

     void func_address (int *v1);
     main ...
     int a;
     func_address (&a);

     이러면 정수형 변수 a의 어드레스 값을 함수로 호출하는 것이기에 주소에 의한 함수 호출이라 할 수 있다.

  3) 함수 f는 리턴값 (반환값)이 없는 함수로, 인수를 정수형 a (4바이트), 정수형 b (2바이트), 부호 없는 정수형 c (4바이트)를 지니고 있다.

  4) 매크로는 open-subroutine system으로 프로그램 시작 전에 link 되어 작동되는 반면,
     함수는 한 프로그램 내 일종의 모듈로써 빈번히 작동할 수 있는 명령어 선언이라 할 수 있겠다.

  5) [반환값 형태] [함수명](인수 선언)
    {
        ...
        return 반환값;
     }

  6) 아래에 작성.

  7) nested function의 예제이다. 
     i = 1) high 함수 호출 -> "high school ~~~" 출력
     i = 2) coll 함수 호출 -> "K.W.~~" 출력
     i = 3) univ 함수 호출 -> "K.W.u~~" 출력
     return 0에 의하여 종료

  8) reculsive function의 예제이다. 자기 자신을 되부름하는 함수 형태이다.
     7 + 6 + 5 + 4 + 3 + 2 + 1을 출력한다. (등차수열 n의 합)

  9) reculsive function의 예제이다. 
     6 * 5 * 4 * 3 * 2 * 1을 출력한다. (팩토리얼)

  10) 인수를 가진 함수의 예제이다.
      i = 1) 2 * 1 = 2
      i = 2) 2 * 2 * 1 = 4
      ...
      제곱을 출력한다.
    */

#include <stdio.h>

void k1 (char *arr[]);

void main()
{
    char *printing[1] = {"computer"};
    
    k1(printing);
}

void k1 (char *arr[])
{
    char *p;
    p = &arr[0][0];
    printf ("%s", p);
}
