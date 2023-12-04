// exercise 6. 구조체

#include <stdio.h>

struct list {
    int a;
    int b;
    char *c;
};

int main()
{
    struct list daramji = {1, 2, "daramji"};
    printf ("%d %d %s\n", daramji.a, daramji.b, daramji.c);
    
    struct list *point;
    point = &daramji; // 구조체 자체엔 주소가 담겨져 있지 않음 (만일 구조체 배열이라면 주소가 있음)
    
    printf ("%d %d %s", point -> a, point -> b, point -> c);
}
