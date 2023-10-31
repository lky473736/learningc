#include <stdio.h>

int main()
{
    int k[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p, sum = 0;
    
    for (p = k; p <= k + 9; p++) // k의 시작주소를 p가 가짐
    {
        sum += *p;
    }
    printf ("%d", sum);
}
