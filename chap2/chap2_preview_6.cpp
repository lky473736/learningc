#include <stdio.h>

int main()
{
    int a = 31;
    long j = 123;
    double x = 131.1;
    
    printf ("%14d\n", a); // 14칸 띄워서 출력
    printf ("%-d\n", a); // 가장 좌측부터 딱 붙여서 출력
    printf ("%ld\n", j); // 4바이트형 정수로 출력
    printf ("%14.3f", x); // 14칸 띄워서 소수점 3자리 수 이하까지 출력

    return 0;
}
