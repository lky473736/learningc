// 실습 2 : 2-5.cpp

#include <stdio.h>

int main() 
{
    char ch = 'C';

    double afkn = 123.45;

    int kbs = 456;
    int sbs = 123;

    double a = 1.4567890123;

    printf ("%c PROGRAM\n", ch);
    printf ("afkn = %f\n", afkn); // 123.450000
    printf ("kbs = %d\nsbs = %d\n", kbs, sbs);
    
    printf ("a = %f\n", a); // 1.456789 (나머지 소수점 버림)
    printf ("a = %e\n", a); 

    return 0;
}

/* 복습
변환 지시자인 %f에 특정한 서식 지정이 없다면 소수점 6자리까지 반올림한 값을 출력함을 기억하자. 
또한 기본적으로 문자는 아스키 코드와 혼용하여 사용된다. 예를 들어

char c = 'a';
printf ("%d", c);

위의 코드는 a의 아스키 코드를 출력한다. 또한

int ascii = 97;
printf ("%c", ascii);

이렇게 하면, ascii 변수에 대응되는 문자를 출력한다. 97이라는 아스키 코드를 가지는 문자는 'a'라 'a'를 출력한다.
*/
