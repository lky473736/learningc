#include <stdio.h>

int main()
{
    int i;
    
    i = !(6>31); // !0 == 1
    printf ("%d\n", i);
    
    int k = 'a'; // 'a'에 대한 아스키 코드를 k에 저장
    printf ("%d", k);
}
