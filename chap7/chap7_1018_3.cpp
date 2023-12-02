// 포인터 : 다음에 처리할 데이터의 주소값

#include <stdio.h>

int main()
{
    int k[3] = {10, 20}; 
    int i, *p; // 포인터형 변수 p 선언
    
    p = k; // 포인터형 변수에 k 배열의 시작 주소 값을 저장
    
    for (int i = 0; i < 3; i++)
    {
        printf ("%d, %p\n", k[i], p + i); // 끝에 지정 안해줬으니깐 0
        // component 지정 안해주면 0
    }
}

/* 복습
배열에서 요소 지정 (component 할당)을 따로 해주지 않으면 static, extern 변수처럼 0이 자동적으로 할당된다.
예를 들어, 

int arr[3][1][1];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 1; j++)
    {
        for (int k = 0; k < 1; k++)
        {
            printf ("%d", arr[i][j][k]);
        }
    }
}

라면, 따로 arr에 값을 지정해주지 않았기 때문에 000이 출력됨을 알 수 있겠다.
*/
