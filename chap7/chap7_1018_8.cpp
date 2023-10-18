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
