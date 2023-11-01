#include <stdio.h>

int hap();

int main()
{
    int sum;
    printf ("sum = %d", sum = hap());
}

int hap()
{
    int i, z = 0;
    for (i = 1; i <= 10; i++) // 1~10까지의 합을 z에 누적 
    {
        z = z + i;
    }
    return z;
}
