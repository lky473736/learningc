/*
#include <stdio.h>

int main()
{
    char c;
    c = getchar();
    
    printf ("%c, %d\n", c, c);
    return 0;
}
*/

/* 
#include <stdio.h>

int main()
{
    while (1) 
        putchar(getchar()); // ctrl + c or ctrl + z로 무한루프 탈출 가능 
} 
*/

#include <stdio.h>

int main()
{
    int a;
    
    while ((a = getchar()) != EOF) // 파일이 끝나지 않는다면 (ctrl + c, ctrl + z를 하지 않는다면) 계속 실행
        putchar(a);
        
    return 0;
}
