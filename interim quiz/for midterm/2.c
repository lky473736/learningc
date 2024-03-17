/*
2. int 형의 정수를 비트 연산자를 사용하여 2의 보수로 변환하는 프로그램을 작성하라. [전체 비트 반전 및 1을 더함 ]
*/

#include <stdio.h>

int main()
{
    int k;
    
    scanf ("%d", &k);
    
    printf ("%d", ~k + 1);
    
    return 0;
}
