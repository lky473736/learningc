#include <stdio.h>

int main()
{
    int a, b, max;
    
    scanf ("%d %d", &a, &b);
    
    max = (a > b) ? a : b; // a > b이면 a, a <= b이면 b
    
    printf ("max = %d", max);
    
    return 0;
}

/* 복습
조건 연산자는 if-else문을 한 줄로 숏코딩한 것이다.

따라서 조건 연산자를 제어문으로 바꾸는 것이 중요한데, 예를 들어, 

i = (a > b) ? (b == 1) ? 1 : 2 : 3

이를 제어문으로 바꾸어보면

if (a > b)
{
    if (b == 1) {
        b = 1;
    }
    else {
        b = 2;
    }
}
else {
    b = 3;
}
*/
