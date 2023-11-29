// 구구단을 for문, while문, goto문, do-while문으로 구현

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++) // for문으로 구현
    {
        for (int j = 1; j <= 9; j++)
        {
            printf ("%d * %d == %d\n", i, j, i * j);
        }
    }
    
    int p = 1;
    
    while (p <= 9) // while문으로 구현
    {
        int q = 1;
        while (q <= 9) 
        {
            printf ("%d * %d == %d\n", p, q, p * q);
            q++;
        }
        
        p++;
    }
    
    int a = 1;
    int b = 1;

K:  printf ("%d * %d == %d\n", a, b, a * b); // goto문으로 구현

    if (a < 9 & b < 9) {
        b++;
        goto K;
    }
    
    else if (a < 9 & b == 9) {
        a++;
        b = 1;
        goto K;
    }
    
    else if (a == 9 & b < 9)
    {
        b += 1;
        goto K;
    }
    
    else if (a == 9 & b == 9)
    {
        ;
    }
    
    int x = 1, y = 1;
    
    do // do-while문으로 구현
    {
        printf ("%d * %d == %d\n", x, y, x * y);
        
        if (y == 9)
        {
            y = 1;
            x += 1;
        }
        
    } while (x != 10 & y++ != 9);
}
