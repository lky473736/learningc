/*
10. (x, y) 좌표를 입력 받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성하라.  

*/

#include <stdio.h>

int main()
{
    double x, y;
    int section;
    
    scanf ("(%lf,%lf)", &x, &y);
    
    section = (x > 0) ? (y > 0) ? 1 : 4 : (y > 0) ? 2 : 3;
    
    printf ("%d", section);
}
