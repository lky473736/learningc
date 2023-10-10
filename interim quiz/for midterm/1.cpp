/*
1. 1000보다 작은 수를 입력 받아서 이것을 백의 자리, 십의 자리, 일의 자리로 분리하여 출력하는 프로그램을 작성하라.
*/

#include <stdio.h>

int main()
{
    int num, hundred = 0, ten = 0, one = 0;
    
    scanf ("%d", &num);
    
    hundred = num / 100;
    ten = (num % 100) / 10;
    one = num - hundred * 100 - ten * 10;
    
    printf ("%d %d %d", hundred, ten, one);
    
    return 0;
}
