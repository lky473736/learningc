#include <stdio.h>

#define NUM 31
#define MSG "GCU\n"
#define SU NUM * NUM
#define PR printf ("NUM => %d\n", i);
#define PRC "NUM => %d\n"

int main(void)
{
    char a = 'k';
    int i = NUM; // i == 31
    
    PR;
    
    i == SU;
    
    printf (PRC, i);
    
    printf ("%s", MSG);
    printf ("MSG"); // 위는 MSG 출력, 아래는 출력 안됨
    
    return 0;
}
