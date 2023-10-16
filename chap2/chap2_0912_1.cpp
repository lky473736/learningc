// 실습 : 2-4.cpp

/*
    int, long : 4바이트 : 32비트
    short : 2바이트 : 16비트 

    char : 1바이트 : 8비트

    float : 4바이트 : 32비트
    double : 8바이트 : 64비트

    unsigned : 부호 없이 출력 (음수 X)
*/

#include <stdio.h>

int main() 
{
    int i = 31; 
    long j = 2147483647;
    double x = 131.274;

    printf ("%14d\n", i); // 14칸 띄워서 오른쪽정렬 출력
    printf ("%-14d\n", i); // 왼쪽으로 바싹 붙여서 출력 

    printf ("%ld\n", j); // long형 정수 출력 (long으로 선언하였으면 %ld 사용하기)

    printf ("%14.1f\n", x); // 14칸 띄워서 소수점 1자리까지 오른쪽정렬 출력 (반올림함)
    printf ("%14.3f\n", x); // 위와 같은데 얘는 소수점 3자리까지 (반올림)
    printf ("%14.3e\n", x); 

    printf ("%f\n", x); // 소수점에 대한 서식지정 없으면 6자리까지 출력
    printf ("%e\n", x);

    return 0;
}
