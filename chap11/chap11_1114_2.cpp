// 구조체 변수 선언 및 할당은 다양하게 할 수 있다

#include <stdio.h>

struct list {
    char *name;
    int no;
}; /*k1 = {"lee", 100}, k2 = {"kim", 200};*/

void main()
{
    /*struct list k1 = {"lee", 100};
    struct list k2 = {"kim", 200};*/
    
    /*k1.name = "lee";
    k1.no = 100;
    k2.name = "kim";
    k2.no = 200;*/
    
    struct list k[2] = {{"lee", 100}, {"kim", 200}};
    
    int i;
    
    for (i = 0; i < 2; i++)
    {
        printf ("%s %d\n", k[i].name, k[i].no);
    }
}

/* 복습
구조체 변수 선언 및 할당 중 배열을 이용하여 하는 방법이 중요하다.

#include <stdio.h>

struct list {
    int a;
    int b;
    int c;
};

int main()
{
    struct list p1[2] = {{1, 2, 3}, {4, 5, 6}};
    struct list *p;
    p = p1;
    
    for (int i = 0; i < 2; i++)
    {
        printf ("%d %d %d\n", (p+i) -> a, (p+i) -> b, (p+i) -> c);
    }
}

위의 코드에서 구조체형 포인터 변수 p를 선언하였고, p에 배열 p1의 시작 주소를 가지게 하였다.
p1은 기본적으로 p[0], p[1]를 가지고 있으며, p[0]과 p[1]이 각각 구조체로 a, b, c를 가지고 있는 것이다.
따라서 49번줄과 같이, 현재 위치에서 a, b, c를 출력할 수 있도록 ->로 표현해야 한다.
*/
