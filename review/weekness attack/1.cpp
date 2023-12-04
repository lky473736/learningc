// exercise 1. 2차원 배열을 이용한 구구단 출력

#include <stdio.h>

int main()
{
    int arr[9][9];
    int i = 0;
    int j = 0;
    
    int *point;
    
    point = arr[0];
    
    while (i < 9)
    {
        j = 0;
        while (j < 9)
        {
            *point++ = (i + 1) * (j + 1);
            j++;
        }
        i++;
    }
    
    point = arr[0];
    
    for (int p = 0; p < 9; p++)
    {
        for (int q = 0; q < 9; q++)
        {
            printf ("%d %d %d\n", p+1, q+1, *point++);
        }
    }
}
