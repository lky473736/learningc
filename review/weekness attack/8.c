// exercise 8. 공용체와 구조체의 차이

#include <stdio.h>

struct slist {
    int a;
    int b;
};

union klist {
    int p;
    int q;
};

int main()
{
    struct slist m = {1, 2};
    union klist n;
    n.p = 3;
    
    printf ("%d %d", m.a, m.b);
    printf ("\n%d %d", n.p, n.q);
}
