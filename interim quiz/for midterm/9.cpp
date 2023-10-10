/*
9. 다음과 같이 정의되는 함수의 함수 값을 계산하여 보자. 사용자로부터 x 값을 입력 받아서 함수 값을 계산하여 화면에 출력한다.

   f(x) = x**2 -9x + 2,  x <= 0

   f(x) = 7x + 2,  x > 0

*/

#include <stdio.h>

int main()
{
    double x;
    
    scanf ("%lf", &x);
    
    if (x <= 0)
    {
        printf ("f(x) = x**2 -9x + 2 --> f(x) = %.3lf", x*x -9*x + 2);
    }
    
    else
    {
        printf ("f(x) = 7x + 2 --> f(x) = %.3lf", 7*x+ 2);
    }
    
    return 0;
}
