#include <stdio.h>

int main()
{
    char k[101010]; // 기억장소 6칸 + 1칸(널문자) 가짐 
    // G a c h o n \0 
    
    int i = 0, *p;
    
    while ((k[i++] = getchar()) != '\n')
    {
        for (int j = 0; j < i; j++)
        {
            putchar (k[j]);
        }
    }
}

/* 복습
pass */
