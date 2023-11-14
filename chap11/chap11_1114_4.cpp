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
