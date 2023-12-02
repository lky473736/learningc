#include <stdio.h>

int main()
{
    int k[3] = {10, 20, 30};
    
    int i, *p;
    p = k; // k의 대표명
    
    for (i = 0; i < 3; i++)
    {
        printf ("k[%d] = %d, addr = %p\n", i, k[i], &k[i]);
        // printf ("k[%d] = %d, addr = %p\n", i, *(p+i), (p+i));
    }
}

// do-while문, while문, goto문으로도 표현해보기 

/* 복습
    
// for문
#include <stdio.h>

int main()
{
    int k[3] = {10, 20, 30}, *p;
    p = k;
    
    int suma = 0;
    
    for (int i = 0; i < 3; i++)
    {
        suma += *(p + i);
    }
    printf ("%d", suma);
}

// while문
#include <stdio.h>

int main()
{
    int k[3] = {10, 20, 30}, *p;
    p = k;
    int i = 0, suma = 0;
    
    while (i < 3)
    {
        suma += *(p + i);
        i += 1;
    }
    
    printf ("%d", suma);
}

// do-while문
#include <stdio.h>

int main()
{
    int k[3] = {10, 20, 30}, *p;
    p = k;
    int i = 0, suma = 0;
    
    do
    {
        suma += *(p + i++);
    } while (i != 3);
    
    printf ("%d", suma);
}

// goto문
#include <stdio.h>

int main()
{
    int k[3] = {10, 20, 30}, *p;
    p = k;
    int i = 0, suma = 0;
    
K:  suma += *(p + i);
    i++;
    
    if (i != 3)
    {
        goto K;
    }
    
    printf ("%d", suma);
}
*/
