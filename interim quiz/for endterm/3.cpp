/*
   직원들의 월급이 배열 A[]에 저장되어 있을때, 이번 달 회사에서 지급할 월급의 총액을 계산하고자 한다. 정수형 배열 요소들의 합을 구하여 반환하는 함수를 작성하고 겨로가를 확인하라. 함수의 원형은 아래와 같다.

   int array_sum(int *A, int size);
*/

#include <stdio.h>

int array_sum(int *A, int size);

void main()
{
    int A[10] = {300, 350, 400, 450, 500, 600, 304, 203, 220, 1920};
    int suma;
    
    suma = array_sum(A, 10);
    printf ("%d", suma);
}

int array_sum(int *A, int size)
{
    auto int suma;
    
    for (int i = 0; i < size; i++)
    {
        suma += *(A + i);
    }
    
    return suma;
}
