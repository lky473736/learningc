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
