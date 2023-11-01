#include <stdio.h>

int hap (int a, int b);

int main()
{
    int k = 5, i = 6, result;
    
    result = hap(k, i);
    printf ("%d", result);
    
    return 0;
}

int hap (int a, int b)
{
    int sum;
    sum = a + b; // sum은 함수 내에서 만 작동하는 지역 변수
    return sum; // 값을 int형으로 반환
}
