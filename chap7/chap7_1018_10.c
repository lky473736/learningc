#include <stdio.h>

int main()
{
    char k[] = "Gachon"; // 기억장소 6칸 + 1칸(널문자) 가짐 
    // G a c h o n \0 
    
    int i, *p;
    
    p = k;
    
    while (1)
    {
        if (i == 7)
        {
            break;
        }
        
        printf ("k[%d] = %c, addr = %p\n", i, k[i], (k + i)); // char의 byte가 1이니깐 하나씩 주소 차이
        i++;
    }
    
    for (i = 0; i < 7; i++)
    {
        putchar (k[i]); // 개행 없음
    }
    
    printf ("\n");
    puts (k); // 문자열 출력
}

/* 복습
10번째 줄 : 포인터형 변수 p에 배열의 시작 주소값을 입력
14번째 줄 : 왜 하필이면 7? -> 배열을 벗어나서 indexerror 걸림
19번째 줄 : 차례대로 문자를 출력, addr는 1씩 차이난다 (char형이니깐), &를 하지 않은 이유는 k가 포인터형 변수이기 때문.
*/
