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

/* 복습
위 코드를 recursive call로도, 공식으로도 해결이 가능하다. 

(1) recursive call

static i = 10;

int hap()
{
    if (i == 0) {
        return 0;
    }

    else {
        return i-- + hap(); 
    }
}

(2) 공식 : 등차수열 n의 합공식

int hap(int n)
{
    return (n) * (n + 1) / 2;
}

*/
