/*
#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    
    for (int a = 1; a <= 100; a++)
    {
        if (a % 2 == 0)
        {
            sum += a;
        }
    }
    
    printf ("%d", sum);
}
*/

/*
#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    
    printf ("%d", sum);
}
*/

/*
#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    
    do
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    while (i <= 100);
    
    printf ("%d", sum);
}
*/

/* 
for문은 loopstation의 loop number를 boolean expression 안에 새로 선언해줄 수 있지만
while문은 loop number를 loopstation 밖에 선언을 해줘야 한다.

for (loop number 선언; boolean expression; 증감)
while (boolean expression by loop number)
*/

/*
    x++은 대입 후 x값 증가이다.
    따라서 첫번째 루프에선 x = 2, y = 2
    두번째 루프에선 x = 3, y = 6
    세번째 루프에선 x = 4, y = 24
    네번째 루프에선 x = 5, y = 120
    조건 판정 시 x++로 인하여 x = 6
    따라서 6, 120이 출력된다.
    */
    
/*
    3번과 마찬가지로 계속 출력이 되다가
    x = 11이 될 때 본 반복문에서 탈출하게 된다.
    이때 조건 판정 시 x++로 인하여 x = 12
    따라서 12, 66이 출력된다.
    */

/* 
    3, 4번과 마찬가지로 계속 출력이 되다가
    증감 때문에 x = 6이 되어 반복문에서 탈출하게 된다.
    따라서 6, 120이 출력된다.
    */

/*
    loop number의 선언과 증감을 생략하고 오직 boolean expression만 탑재하여 while문과 동일한 성격을 지니게 되었다.
    x = 10이 될 때 x++로 인하여 x는 11이 되고, 이때 반복문을 탈출한다. 
    따라서 11, 55가 출력된다.
    */
