// 0913 실습 5

#include <stdio.h>

int main()
{
  int i;
  char x;

  scanf ("%3d%*5d%c", &i, &x); // 3자리를 i로 받고, 5자리 건너뒤고, 문자 하나 받기

  printf ("i = %d\n", i);
  printf ("x = %c\n", x);

  return 0;
}

/* 복습
기본적으로 서식 지정은 다양한 것이 있는데, 가장 대표적으로

%{숫자}(변환 지시자) : 숫자만큼 변수 받음
%*{숫자}(변환 지시자) : 숫자만큼 jumping 후 변수 받음

예를 들어,

int i;
char c;

scanf_s("%10d%*1d%c", &i, &c); 

만약에 1234567890fu라는 입력값을 주었다고 하였을 때, i는 1234567890이 저장되면서 f는 jumping하고, c엔 u가 저장된다.
*/
