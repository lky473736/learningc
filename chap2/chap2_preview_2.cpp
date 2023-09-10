/* 
  하나의 문자 = 1byte
  문자를 저장할 때 코드화 : PC - ASCII, IBM workstation - EBCDIC

  unsigned char (부호 없는 문자형) : 0 ~ 2^8-1 
  char (부호 있는 문자형) -> MSB에 부호비트 : -(2^8-1) ~ +(2^8-1)

  * 문자형의 상수와 변수는 한 바이트의 정수형 상수나 변수로 취급 -> 다른 정수나 실수형의 산술연산이 가능
  -> 문자형끼리의 연산이 가능 (그 문자의 ASCII끼리의 연산)
*/

#include <stdio.h>

int main() 
{
  char str; // str이라는 문자를 선언
  char character = 'K'; // character라는 변수에 'K'라는 초기 설정을 함

  printf ("%c ",  character); // K
  printf ("%c", character + 1); // K의 아스키코드 + 1 = L
}
