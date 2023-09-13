// 0913 실습 1

#include <stdio.h>

int main()
{
    int i, today;
    enum today {SUN, MON, TUE, WEN, THU, FRI, SAT};
    
    today = SUN;
    printf ("%d\n", today);
    
    for (i = 0; i <= SAT; i++)
    {
        printf ("%d\n", i);
    }
    
    return 0;
}
