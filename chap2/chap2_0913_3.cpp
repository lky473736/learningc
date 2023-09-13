// 0913 실습 3

#include <stdio.h>

int main()
{
    int a = 360, b;
    double f = 4.966449; // float 선언 시 C4305 에러 발생 -> 실수 연산은 무조건 double
    printf ("%d %f %f\n", a, f, a * f); // a * f <- 컴파일러가 360을 실수 형태인 360.000000 형태로 변환하여 처리

    b = a * (int)f; // 개발자가 f를 정수로 (소수점 이하 버림) 하여 명시적으로 형 변환
    printf ("%d", b);
}
