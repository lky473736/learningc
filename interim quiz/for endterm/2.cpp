/*
   정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수 array_copy()를 작성하고 결과를 확인하라.(배열 A와 B는 포인터 매개변수, SIZE는 일반 매개변수 사용)
*/

#include <stdio.h>

void array_copy(int *A, int *B, int SIZE);

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int B[10];
    
    array_copy(A, B, 10);
    
    for (int i = 0; i < 10; i++)
    {
        printf ("%d ", *(B + i));
    }
    
    return 0;
}

void array_copy(int *A, int *B, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        *(B + i) = *(A + i);
    }
}
