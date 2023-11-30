#include <stdio.h>

#define PRN (i, j); printf("i -> %d, j -> %d \n\n", i, j);

int main()
{
    int i, j = 6;
    
    i = j++ + 3; 
    PRN (i, j); // i = 9, j = 7
    
    i = ++j; 
    PRN (i, j); // i = 8, j = 8
    
    return 0;
}

/* 복습
a++ : a를 먼저 대입 후 증가
++a : a를 증가 후 대입

예를 들어,
    
#include <stdio.h>

int main()
{
    int i = 0, j = 0, p = 0, q = 0, k = 0;
    p = i++ + j++; // -> p엔 0이 저장되고, i = 1, j = 1
    q = ++i + j++; // -> q엔 2 + 1 = 3이 저장되고, i = 2, j = 2
    k = i++; // k엔 2가 저장되고, i = 3
    printf ("%d %d %d %d %d", i, j, p, q, k); // 3, 2, 0, 3, 2
}
*/
