/*
  chap6 연습문제 풀이

  1) 프로그램이 컴파일되고 실행되는 과정은 크게 4단계로 분류된다.
     (1) 사용자가 작성한 source program
     (2) 컴파일 (compiler) -> object program (실행불가능)
     (3) 링크 (linkage module) -> load module (실행가능)
     (4) 로드 (loader) -> 실행

     이때, 사용자가 source program에서 작성한 헤더파일, 매크로는 링크 시에 load module에 확장되어 첨부된다.
     이를 open sub-routine이라 한다.

  2) stdafx.h 파일 안에 stdio.h, string.h, stdlib.h를 선언한다. 
     stdafx.h를 source program과 같은 디렉토리에 놓고, source program에서 해당 파일을 선언한다. (인용 표시로)

  3) 대문자, 세미콜론 X...

  4) 매크로 정의는 #define, 매크로 정의 취소는 #undef

  5) #ifdef, #ifndef, #if 등을 이용하여 조건에 맞게끔 매크로를 설정할 수 있다.
     다만 위의 명령어를 사용할 때, 항상 제어 마지막엔 #endif를 작성할 것

  6) 아래에 작성

  7) 300, 33, 10, 4가 순서대로 출력됨

  8) 3, 4가 순서대로 출력됨

  9) 3.141593 (반올림된 값)이 출력됨

  10) 9, 18, 6이 차례대로 출력됨
 */

// 이론상 아래가 맞다. 하지만 C 계열 언어에서 preprocessor에서는 전처리 시 부동 소수점을 다룰 수 없다.
// 아마도 책의 오류인 것 같다.

#define PIE 0
#if PIE != 3.14
#define PIE 3.141592
#endif

#include <stdio.h>

int main()
{
  printf ("%f", PIE);
  return 0;
}
