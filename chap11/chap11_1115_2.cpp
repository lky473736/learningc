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


/* 복습
구조체와 공용체는 굉장히 비슷하다. 다만 다른 한 가지는 기억 장소를 서로 공유하고 있다는 것이다.
따라서 k.a에 97를 입력하면, k.b도 97이 되는 것이다. 따라서 %c는 아스키코드 97를 가지는 a가 출력된다.
*/
