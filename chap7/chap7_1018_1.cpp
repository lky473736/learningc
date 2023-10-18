#include <stdio.h>

// 배열을 가진 코드가 실행될때마다 포인터 주소가 달라질 수 있음 (동적 메모리 할당 때문에)

int main()
{
    int arr[3] = {10, 20, 30}; // 3개의 장소 사용 (각각 4바이트)
    
    /*
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    */
    
    for (int i = 0; i < 3; i++)
    {
        printf ("%d, %p\n", arr[i], &arr[i]); // %d : component값, %p : 포인터 주소(16진수, & 붙이기)
        // 포인터 주소는 0~2까지 4바이트씩 차이남
    }
}
