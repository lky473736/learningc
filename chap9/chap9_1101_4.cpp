#include <stdio.h>

int hap (int a, int b);

int main()
{
    int k = 5, i = 6, result;
    
    result = hap(k, i);
    printf ("%d", result);
    
    return 0;
}

int hap (int a, int b)
{
    int sum;
    sum = a + b; // sum은 함수 내에서 만 작동하는 지역 변수
    return sum; // 값을 int형으로 반환
}

/* 복습
함수는 총 2가지의 종류가 있다. 이는 반환값을 기준으로 한다.

1) 반환값이 없는 함수
형 선언을 void형으로 하며, 말 그대로 반환값이 없기 때문에 함수 내에서는 단지 출력을 하거나, 계산을 하여 출력하거나의 기능을 가진다.

2) 반환값이 있는 함수
형 선언을 void형 이외로 하며, 반환값이 있기 때문에 반환값의 형에 맞춰서 main함수에서 함수의 값을 받아야 할 것이다.

반환값이 있는 함수는 크게 2가지로 나뉜다.

1 - 특정 수, 배열, 문자열을 반환 : 함수 내에서 연산을 하거나 조작하여 반환한다.
2 - 주소값을 반환 : void형으로 선언하며, 주소값을 받고, 그 주소값이 가리키는 값을 함수 내에서 직접 조정한다.

예를 들어, 위의 코드를 주소값을 반환하는 함수로 개조한 것이다.

main...
hap(&k, &i, &result);
...
    
void hap (int *a, int *b, int *result)
{
    *result = *a + *b;
}

*/
