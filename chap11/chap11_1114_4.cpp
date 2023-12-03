#include <stdio.h>

struct list{
    char *nam;
    char *tel; 
    // 직접 대입연산자로 데이터를 넣지 않으니 const를 쓰지 않아도 된다
};

struct list m;

void inp();

int main()
{
    inp();
    return 0;
}

void inp()
{
    char name1[10], tel1[10];
    
    scanf ("%10s %10s", name1, tel1);
    
    m.nam = name1;
    m.tel = tel1;
    
    printf ("%s %s\n", m.nam, m.tel); 
    // main으로 m.nam, m.tel을 어떻게 return할 수 있을까?
}

/* 복습
구조체 안에서는 문자형 포인터 변수를 통해 문자열을 받겠다는 선언을 하였으며,
inp() 안에서는 문자열 배열을 통해 문자열을 입력받고, 그 값을 구조체에 삽입하였다. 이래도 당연히 작동한다.

문자열 배열은 수정 가능, 입력 가능, 대입 가능
문자형 포인터 변수는 수정 불가, 입력 불가, 대입 가능
매크로 정의는 수정 불가, 입력 불가, 대입 불가

#include <stdio.h>

int main(){
    char *a;
    char *b;
    char p[10];
    char q[10];
    
    scanf ("%s %s", p, q);
    
    a = p;
    b = q;
    
    printf ("%s %s", a, b);
}
*/
