// exercise 7. 구조체 배열

#include <stdio.h>

struct list {
    int a;
    char *b;
};

int main()
{
    struct list arr[3] = {{1, "daramji"}, {2, "goyang-ee"}, {3, "gae"}};
    // 서로 일렬로 위치함 : arr0, arr1, arr2
    struct list *point;
    
    point = arr; // 배열명엔 배열의 시작 주소 포함
    
    for (int i = 0; i < 3; i++)
    {
        printf ("%d %s\n", (point+i) -> a, (point+i) -> b);
    }
}
