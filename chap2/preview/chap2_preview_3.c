/*
  부호가 없다 = unsigned : 0부터 할당된 비트 수만큼
  부호가 있다 = signed : -(n - 1) ~ +(n - 1)

  int, long = 4byte = 32bit = 2^32 : -(2^16-1) ~ +(2^16-1)
  short = 2byte = 16bit = 2^16 : -(2^8-1) ~ +(2^8-1)

  unsigned : 0 ~ +(2^n-1)

  변수 2개 이상의 동일 형태의 선언 : comma로 구분하여 한 줄에서 동시에 선언 가능
*/

int a, b, c;

unsigned int k;
unsigned k; // 위 두 코드는 같은 말 (int'만' 생략 가능)

unsigned short l;
short l = 0;
