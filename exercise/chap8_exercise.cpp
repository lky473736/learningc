/*
  1) 포인터는 어떠한 변수의 어드레스를 가지는 변수라고 보면 된다.
     만약에 int a = 10;이라는 선언문에서 a의 어드레스를 저장하는 변수를 가지고 싶다면,
     int *p = &a;라고 선언하면 된다. 여기서 &는 어드레스로, &a는 변수 a의 어드레스라고 생각하면 된다.

  2) 배열은 어떤 한 기억장소 내에 component가 한 블록 안에 저장되는 구조로써 index를 가진다.
     배열의 component가 시작되는 시작주소에 포인터를 지정할 수 있다. 예를 들어서
     int K[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
     int *p = &K[0];이라면
     포인터형 변수 p엔 배열 K의 인덱스 0번째의 시작주소가 저장되며, p+1은 &K[1], p+2는 &k[2]가 된다.

  3 ~ 7) 아래에 주석에 작성

  8) p는 포인터형 변수로, x의 시작주소를 가지고 있다. (어드레스를 가지고 있다.)
     A, x의 어드레스
     포인터형 변수 p의 값 <== x의 어드레스를 가지고 있다
     x의 어드레스가 저장된 p의 어드레스 (16진수)
     A (*p는 주소 p의 참조값이라는 의미)
     y는 지정 안했기 때문에 이상한 값 나옴

  9) &x를 p가 가지고 있으며, &p를 pp가 가지고 있다.
     &x
     &p
     16
     16
     16
     17
     17

  10) 생략.
*/

/* 3)
#include <stdio.h>

void main()
{
    int kbs = 31, *p1, **p2;
    p1 = &kbs;
    p2 = &p1;
    
    printf ("%d = %d = %d", kbs, *p1, **p2);
}
*/

/* 4)
#include <stdio.h>

void main()
{
    char k[] = "gachon university", *p;
    
    p = &k[7];
    
    printf ("%s", p);
}
*/

/* 5)
#include <stdio.h>

void main()
{
    char *k1[3] = {"computer", "software", "engineering"}; // 배열 안에 문자열들을 저장 <== 배열명 앞에 *
    char *p1, *p2, *p3;
    
    p1 = k1[0];
    p2 = k1[1];
    p3 = k1[2]; // 이미 문자열 포인터 배열에서 *처리 해주어서 & 안해도 됨
    
    printf ("%s, %p\n", p1, p1);
    printf ("%s, %p\n", p2, p2);
    printf ("%s, %p\n", p3, p3);
}
*/

/* 6)
#include <stdio.h>
#include <string.h>

void main()
{
    char *p1[2] = {"computer", "software"};
    
    printf ("%d\n", strlen(p1[0]));
    printf ("%d", strlen(p1[1]));
}
*/

/* 7)
#include <stdio.h>
#include <string.h>

void main()
{
    char *p1[2] = {"computer", "software"};
    
    printf ("%d", strcmp (p1[0], p1[1])); // c의 아스키코드 - s의 아스키코드 = -16
}
*/
