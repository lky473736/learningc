#include <stdio.h>

#define MUL1(i) i * i 
#define PRN(i) printf ("%d\n", i)//;

int main()
{
    int i = 3;
    
    PRN(MUL1(3));
    PRN(3 / MUL1(3));
}

/* 복습
#define에는 세미콜론 안붙이니깐 조심하자. 
*/
