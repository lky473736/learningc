/*
char 변수
변수 = getchar() : 변수 안에 하나의 문자를 입력한 것을 저장

getchar()할 때 ASCII로 인해 정수형으로 저장됨 */

#include <stdio.h>

int main() 
{
    char c;
    
    c = getchar();
    
    printf ("integer : %d\n", c);
    printf ("char : %c", c);
}
