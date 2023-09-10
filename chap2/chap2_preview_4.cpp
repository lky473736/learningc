/*
  https://www.youtube.com/watch?v=-GsrYvZoAdA
  
  RAM에서 수 저장 (비트)
  소수 저장 : IEEE 형식에 맞게 float형은 32비트, double형은 64비트 사용
  float형 : 8비트 : 지수, 부호
            16비트 : mantissa

  무한소수 -> 32비트 넘게 비트가 초과 -> 잘라야 함 -> 오차
  1.0 + 1.1 == 2.1 (x)
  따라서 연산 시에 비트가 많아 오차가 적은 double형을 사용하는 것이 좋음

  double -> float : C4305 에러 발생
*/

#include <stdio.h>
#include <stdbool.h>

int main() 
{
    float a = 1.0;
    float b = 0.1;
    
    printf ("%f\n", a);
    printf ("%f\n", b);
    
    if ((a + b == 1.1) == true)
    {
        printf ("true");
    }
    
    else
    {
        printf ("false");
    }
    
    return 0;
}
