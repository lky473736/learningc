// 0913 과제 3. 2-9 실습

#include <stdio.h>

int main()
{
    int val = 0;
    enum gcu {g = 10, a = 13, c, h = 32, o, n};

    val = c;
    printf ("%d\n", c); // 14

    val = o;
    printf ("%d\n", o); // 33

    val = n;
    printf ("%d\n", n); // 34

    return 0;
}
