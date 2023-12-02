/*
  문자열 안에 포함된 특정한 문자의 갯수를 세는 함수 int str_chr(char *s, int c)를 작성하라. 여기서 s는 문자열이고, c는 개수를 세어야 할 문자이다.
  */

// 문제 오류 : int c가 아니라 char c

#include <stdio.h>
#include <string.h>

int str_chr(char *s, char c);

void main()
{
    char string[100];
    char c;
    
    gets(string);
    c = getchar();
    
    int counting = str_chr(string, c);
    
    printf ("%d", counting);
}

int str_chr(char *s, char c)
{
    int length = strlen(s);
    auto int counting = 0;
    
    for (int i = 0; i < length; i++)
    {
        if (*(s + i) == c)
        {
            counting++;
        }
    }
    
    return counting;
}
