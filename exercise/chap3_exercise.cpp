/*
  chap3 연습문제 풀이

  1~3) 생략.

  4) 초기 값 : x = y = z = 3
     z = x++ + y++ : z = 3 + 3 = 6, x = 4, y = 4

     첫번째 출력 : 4, 4, 6

     z = ++x + ++y : z = 5 + 5 = 10, x = 5, y = 5

     두번째 출력 : 5, 5, 10

     z = --x + --y : z = 4 + 4 = 8, x = 4, y = 4

     세번째 출력 : 4, 4, 8

  5) .2f는 소수점 2자리까지 반올림된 값을 출력한다는 것을 명심.
     7.33 출력

  6) computer science는 총 문자열 갯수가 16. (8 + 1(공백) + 7)
     sizeof(문자열)하면 총 문자열 갯수 + 1 (널문자 갯수) return
     17 출력

  7~10) 아래에 기술.
*/

/* 7)
#include <stdio.h>

int main()
{
    int i = 250;
    
    i <<= 3;
    
    printf ("%d", i);
    
    return 0;
}
*/

/* 8)
#include <stdio.h>

int main()
{
    int j = -14;
    
    printf ("%o", ~j);
    
    return 0;
}
*/

/* 9)
#include <stdio.h>

int main()
{
    int j = -127;
    int p = 14;
    
    printf ("AND = %d\n", j & p);
    printf ("OR = %d\n", j | p);
    printf ("XOR = %d", j ^ p);
    
    return 0;
}
10) 은 아래에 서술. */

#include <stdio.h>

int main()
{
  int a, b;
  int k;

  scanf ("%d %d", &a, &b);

  k = (a < b) ? (a) : (b);

  printf ("minimum : %d\n", k);

  return 0;
}
