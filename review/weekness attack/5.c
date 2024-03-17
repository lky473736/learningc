// exercise 5. 문자열을 입력으로 받는 함수

#include <stdio.h>

void func1 (char k[]);
void func2 (char *p);

int main()
{
    char k[] = "daramji";
    char *p = "daramji";
    
    func1(k);
    func2(p);
}

void func1 (char k[])
{
    if (k[0] == 'd')
    {
        printf ("func1 activated\n");
    }
}

void func2 (char *p)
{
    if (p[0] == 'd')
    {
        printf ("func2 activated\n");
    }
}

// 문자형 포인터 변수 == 문자열 배열
