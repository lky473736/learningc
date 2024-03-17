// exercise 3. 2차원 배열을 입력으로 받는 함수

#include <stdio.h>

int func (int a[][2]);

int main()
{
    int a[][2] = {{1, 2}, {3, 4}}; // 2차원 배열부턴 마지막 차원의 크기는 명시 필수
    int returning = func(a);
    
    printf ("%d", returning);
}

int func (int a[][2])
{
    return a[1][1];
}
