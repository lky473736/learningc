/* 
  chap11 연습문제 풀이

  1) 구조체 : 다양한 데이터 형을 가진 변수를 관리
     배열 : 하나의 데이터 형을 가진 데이터들을 블록 형태로 관리

  2) struct 구조체명{
        tag member
      };

  3) 구조체 : 태그맴버에 데이터들을 동시 저장이 가능하다.
     공용체 : 모든 태그맴버가 기억장소를 공유한다.

  4) 기억장소 할당엔 malloc, 해제는 free를 사용한다.
 
  5) 오류가 발생한다. kbs.a = "korea"에서 널 문자를 저장할 수 있는 방법이 없기 때문이다. string.h의 strcpy를 이용하여 계산한다.
*/

#include <stdio.h>
#include <string.h>

union list {
    int num;
    char ch;
    char a[6];
};

int main()
{
    union list kbs;
    printf ("%ld ", sizeof(kbs));
    kbs.num = 9;
    kbs.ch = 'K';
    strcpy(kbs.a, "korea");

    
    printf ("%d ", kbs.num);
    printf ("%c ", kbs.ch);
    printf ("%s", kbs.a);
}
