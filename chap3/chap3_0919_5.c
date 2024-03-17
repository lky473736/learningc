#include <stdio.h>

int main()
{
    int i;
    
    i = !(6>31); // !0 == 1
    printf ("%d\n", i);
    
    int k = 'a'; // 'a'에 대한 아스키 코드를 k에 저장
    printf ("%d", k);
}

/* 복습
부정 연산자는 boolean expression의 진리값을 부정시켜준다.
0은 False, 1은 True를 의미하며
C언어 계열에서는 보통은 0이 아니면 다 참으로 인식한다.
*/
