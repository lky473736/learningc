// 문자열 배열

#include <stdio.h>

int main()
{
    char k[] = "Gachon"; // 기억장소 6칸 + 1칸(널문자) 가짐 
    // G a c h o n \0 
    
    int i;
    
    for (i = 0; i < 7; i++)
    {
        printf ("k[%d] = %c, addr = %p\n", i, k[i], &k[i]); // char의 byte가 1이니깐 하나씩 주소 차이
    }
}

/* 복습
문자열 배열이다. 문자열 배열은 포인터형 변수로도 표현이 가능하다.
char k[] = "Gachon"과 동일한 것은 아래와 같다.

char *k = "Gachon";

출력할 때 *를 붙이지 않고 인자를 그냥 k로 지정해서 출력한다.
이는 문자열 배열도 마찬가지이다.
*/
