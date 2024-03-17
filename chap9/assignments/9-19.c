#include <stdio.h>

void print (char b[]); // 문자열 배열을 인수로 가짐

void main()
{
    char *board[] = {"kbs", "mbc", "sbs"};
    int i;
    
    for (i = 0; i < 3; i++)
    {
        print (board[i]);
    }
}

void print(char b[])
{
    char *k = b;
    printf ("%s", k);
    printf ("\n");
}
