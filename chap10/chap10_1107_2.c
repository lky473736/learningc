/*
#include <stdio.h>

void k();

void main()
{
    int i = 6, j = 14;
    k();
    printf ("%d %d", i, j);
}

void k()
{
    int i = 37;
    printf ("%d\n", i);
}
*/

#include <stdio.h>

void k();

int main()
{
    int i = 6;
    int l = 14;
    k(l);
    printf ("%d %d", i, l);
}

void k(int j)
{
    int i = 37;
    printf ("%d %d\n", i, j);
}

/* 복습
stack i : 6 / stack j : 14
k(j) 호출 (stack i 초기화)
stack i : 37 / stack j : 14
37, 14 출력
다시 main() 호출 (stack i 초기화)
6, 14 출력
*/
