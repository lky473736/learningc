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
