#include <stdio.h>

int main()
{
    char k1[] = "gachon"; // gachon + 널문자 == 7개
    char *k2 = "univ."; // univ. + 널문자 == 6개
    char *p;
    
    printf ("%s, %s\n", k1, k2);
    
    p = k1;
    printf ("%s\n", p);
    
    p = k2;
    printf ("%s", p);
}
