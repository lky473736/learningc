#include <stdio.h>

union list {
    int a;
    char b; // 기억장소를 공유함
};

int main()
{
    union list k;
    k.a = 97;
    printf ("%d %c\n", k.a, k.b); // k.a랑 k.b가 동일한 값을 지니면서 97 a 출력 
    k.a = 100;
    printf ("%d %c", k.a, k.b);
}
