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

/* 복습
쉽게 생각해서, getchar는 화면에 입력하자 마자 저장되는 것이다. 
따라서 3을 입력하면 3은 a에 저장되어 출력되고, 입력 시 enter의 개행 문자까지 같이 출력된다. 

만약에 프로그램을 아래와 같이 작성한다면, 한번 입력 후에 바로 종료된다. 그 이유는 버퍼로 인하여 개행이 조건식과 만나 불일치로 종료되기 때문이다.

#include <stdio.h>

int main()
{
    char a = 'd';
    
    while (a != '\n') // 파일이 끝나지 않는다면 (ctrl + c, ctrl + z를 하지 않는다면) 계속 실행
        a = getchar();
    
    putchar(a);
        
    return 0;
}
*/
