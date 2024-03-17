/*다음과 같이 연산의 이름을 문자열로 받아서 해당 연산을 실행하는 프로그램을 작성하라. 연산을 나타내는 문자열은 "add", "sub", "mul", "div"로 한다.

    연산을 입력하라: add 5 10

    연산의 결과: 15
*/

#include <stdio.h>
#include <string.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

void main()
{
    char oper[3];
    int a, b;
    
    printf ("연산을 입력해라 : ");
    scanf ("%s %d %d", oper, &a, &b);
    
    int opernum = 0;
    
    if (strcmp(oper, "add") == 0)  {opernum = 1;}
    else if (strcmp(oper, "sub") == 0) {opernum = 2;}
    else if (strcmp(oper, "mul") == 0) {opernum = 3;}
    else if (strcmp(oper, "div") == 0) {opernum = 4;}
    
    switch (opernum)
    {
        case 1 : 
            printf ("%d\n", add(a, b));
            break;
            
        case 2 : 
            printf ("%d\n", sub(a, b));
            break;
            
        case 3 : 
            printf ("%d\n", mul(a, b));
            break;
            
        case 4 : 
            printf ("%d\n", div(a, b));
            break;
            
        default : 
            break;
    }
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}
