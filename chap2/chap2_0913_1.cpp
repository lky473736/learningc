// 0913 실습 1

#include <stdio.h>

int main()
{
    int i, today;
    enum today {SUN, MON, TUE, WEN, THU, FRI, SAT}; // enum 이름 {변수들};
    
    today = SUN;
    printf ("%d\n", today);
    
    for (i = 0; i <= SAT; i++) // SAT까지니깐 6까지 출력한다는 것
    {
        printf ("%d\n", i);
    }
    
    return 0;
}
