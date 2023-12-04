// exercise 2. 배열을 입력으로 받는 함수

#include <stdio.h>

int func (int a[]);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int returning = func(a);
    
    printf ("%d", returning);
}

int func (int a[])
{
    printf ("func activated\n");
    return a[0];
}
