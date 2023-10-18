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
