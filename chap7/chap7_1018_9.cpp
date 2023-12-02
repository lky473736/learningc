#include <stdio.h>

int main()
{
    char k[] = "Gachon"; // 기억장소 6칸 + 1칸(널문자) 가짐 
    // G a c h o n \0 
    
    int i, *p;
    
    p = k;
    
    for (i = 0; i < 7; i++)
    {
        printf ("k[%d] = %c, addr = %p\n", i, k[i], (k + i)); // char의 byte가 1이니깐 하나씩 주소 차이
    }
    
    for (i = 0; i < 7; i++)
    {
        putchar (k[i]); // 개행 없음
    }
    
    printf ("\n");
    puts (k); // 문자열 출력
}

/* 복습
gets_s는 인자값으로 주소값을 가지니, 그냥 문자열 배열이나 포인터형 변수의 이름을 넣으면 된다.
puts도 마찬가지이다. 참고로 putchar는 개행이 없다. 그러니깐 22번에 개행을 해 준 것. puts는 개행이 있다.
*/
