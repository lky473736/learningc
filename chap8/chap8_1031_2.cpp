#include <stdio.h>

int main()
{
    int k = 31, *p, **pp;
    p = &k;
    pp = &p;
    printf ("%p %p\n", p, pp);
    
    (*p)++;
    printf ("%d %d %d\n", k, *p, **pp);
    
    (**pp)++;
    printf ("%d %d %d\n", k, *p, **pp);
    
    return 0;
}

/* 복습
변수를 선언 시에 *p는 포인터형 변수를 의미하고, **pp는 포인터의 포인터형 변수를 의미한다.
그니깐, 포인터의 포인터형 변수는, 특정 포인터의 주소값을 저장하는 변수라는 의미이다.
p = &k이고, pp = &p이면 *p는 k이고, *pp는 p이며, **pp는 *(*pp) == *p == k이다.

int k = 0, *p, **pp;
k, 포인터형 변수 p, 포인터의 포인터형 변수 pp를 선언하였다.

p = &k;
pp = &p;
printf ("%p %p\n", p, pp);
p는 k의 주소값을 가지고, pp는 포인터형 변수 p의 주소값을 가진다.
        
(*p)++;
printf ("%d %d %d\n", k, *p, **pp);
*p는 p의 주소가 가리키고 있는 k를 의미하고, k를 1 증가시켰다. 따라서 1 1 1이 출력된다.
    
(**pp)++;
printf ("%d %d %d\n", k, *p, **pp);
*pp는 p의 주소값이며, *(p의 주소값) == k이다. k를 1 증가시켰다. 따라서 2 2 2가 출력된다.*/
