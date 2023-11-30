#include <stdio.h>

int main()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    
    if (a > b) 
    {
        printf ("a > b\n");
    }
    
    else if (a < b) 
    {
        printf ("a < b\n");
    }
    
    else 
    {
        printf ("a == b\n");
    }
    
    return 0;
}

/* 복습
위 제어문을 조건 연산자로 변경하면,
(a > b : 1, a < b : 0, a == b : -1)

compo = (a > b) ? 1 : (a < b) ? 0 : -1
*/
