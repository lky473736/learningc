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
