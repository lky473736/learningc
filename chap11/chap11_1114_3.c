#include <stdio.h>

struct list {
    char *name;
    int no;
    struct list *next;
}; 

void main()
{
    
    struct list k[2] = {{"lee", 100}, {"kim", 200}};
    
    struct list *p;
    
    k[0].next = &k[1];
    k[1].next = NULL;
    
    for (p = k; p; p = p -> next)
    {
        printf ("%s %d\n", p -> name, p -> no);
    }
}

/* 복습
포인터형 변수는 반드시 (주소) -> (태그맴버)로 구성한다는 것
*/
