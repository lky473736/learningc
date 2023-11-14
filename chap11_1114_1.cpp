#include <stdio.h>
#include <string.h>

struct list // visual studio 22에서는 const char 붙여야 함
{
    char name[10]; // char *name과 구분해서 사용해야 함
    int no;
};

int main()
{
    struct list k;
    
    /*k.name[0] = 'l'; 
    k.name[1] = 'e';
    k.name[2] = 'e';
    k.name[3] = '\0';*/
    
    strcpy(k.name, "lee"); // char name[10]으로 할 때 이렇게
    
    k.no = 100;
    
    printf ("%s %d", k.name, k.no);
    
    return 0;
}
