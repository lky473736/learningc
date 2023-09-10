// https://dojang.io/mod/page/view.php?id=480

#include <stdio.h>

int main()
{
    int i, today;
    enum week {SUN = 1, MON, TUE, WEN, THU, FRI, SAT}; // enum = 집햡형, 열거형 변수 리스트를 가짐. 처음부터 자동으로 0부터 할당됨.
    
    today = SUN;
    printf ("%d", today); // 1

    today = SAT;
    printf ("%d", today); // 7
}
