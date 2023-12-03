#include <stdio.h>

void ex (int *v1, int *v2);

int main()
{
    int v1 = 5, v2 = 6;
    ex (&v1, &v2);
    printf ("v1 = %d, v2 = %d", v1, v2);
}

void ex (int *v1, int *v2)
{
    int z;
    z = *v1; // z = 5
    *v1 = *v2; // v1 = 6
    *v2 = z; // v2 = 5
}

/* 복습
위 코드는 두 변수의 값을 서로 교환하는 exchange의 과정을 하고 있다. 15번째 줄에 z는 원래 v1의 값을 저장하는 과정을 하고 있다.
아래 코드는 연습삼아 세 변수의 값을 교환하는 함수를 작성한 것이다. 변수 1은 변수 2와, 변수 2는 변수 3과, 변수 3은 변수 1과 교환된다.

#include <stdio.h>

void exchange_3 (int *v1, int *v2, int *v3);

int main()
{
    int a = 0, b = 1, c = 2;
    
    exchange_3 (&a, &b, &c);
    
    printf ("%d %d %d", a, b, c);
}

void exchange_3 (int *v1, int *v2, int *v3)
{
    int r;
    r = *v3;

    *v3 = *v2;
    *v2 = *v1;
    *v1 = r;
}
*/

