/*
3. 사용자로부터 정수 x, y를 입력 받아서 x << y 의 값을 출력하는 프로그램을 작성하라. 
*/

#include <stdio.h>

int main()
{
    int x, y;
    
    scanf ("%d %d", &x, &y);
    
    printf ("%d << %d = %d", x, y, x << y);
    
    return 0;
}
