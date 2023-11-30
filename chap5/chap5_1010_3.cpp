#include <stdio.h>

int main()
{
    int a = -31;
    
    while (++a);
    
    printf ("a = %d", a);
    
    return 0;
}

/* 복습
while(증감하는 조건); 은 조건이 0이 되는 순간 False로 while문을 탈출하게 된다.

따라서 위의 코드에서 a = -31에서 ++a가 0이 되는 순간 while문을 탈출한다. 0을 출력한다.
만약 a++이였다면 1을 출력한다.
*/
