// 0913 실습 1

#include <stdio.h>

int main()
{
    int i, today;
    enum today {SUN, MON, TUE, WEN, THU, FRI, SAT}; // enum 이름 {변수들};
    
    today = SUN;
    printf ("%d\n", today);
    
    for (i = 0; i <= SAT; i++) // SAT까지니깐 6까지 출력한다는 것
    {
        printf ("%d\n", i);
    }
    
    return 0;
}

/* 복습
열거형은 아래와 같이 사용한다.

열거형 변수를 지정할 변수 선언;
enum 열거형명 {열거형 변수};
열거형 변수를 지정할 변수 = 특정 열거형 변수;

예를 들어,

int daramji;
enum food {milk, dotori, gamja};
daramji = milk;

그러면 daramji에는 milk에 대응되는 숫자 0이 저장된다. 
*/
