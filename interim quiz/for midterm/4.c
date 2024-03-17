/*
4. 조건연산자 ? 만을 이용하여 2차원 공간의 x좌표와 y좌표를 입력 받아서 그 좌표가 속하는 사분면을 출력하는 프로그램을 작성하라.

   x > 0, y > 0 -> 1 사분면,    x < 0, y > 0 -> 2 사분면,  x < 0, y < 0 -> 3 사분면, x > 0, y < 0 -> 4 사분면, 
*/

#include <stdio.h>

int main()
{
    int x, y, section = 0;
    
    scanf ("%d %d", &x, &y);
    
    section = (x > 0) ? (y > 0) ? 1 : 4 : (y > 0) ? 2 : 3;
    
    printf ("%d", section);
    
    return 0;
}
