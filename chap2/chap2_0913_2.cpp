// 0913 실습 2

#include <stdio.h>

int main()
{
    int val;
    enum kw {k = 10, y, u = 30, n, g};
    
    val = k;
    printf ("%d\n", val);
    
    val = n;
    printf ("%d\n", val);
}
