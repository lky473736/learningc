#include <stdio.h>

void func(int a, int b, int *sum);

int main()
{
    int a = 5, b = 6, r;
    func (a, b, &r); // &r = r의 주소값
    
    printf ("%d", r);
    return 0;
}

void func (int a, int b, int *sum)
{
    *sum = a + b;
}
