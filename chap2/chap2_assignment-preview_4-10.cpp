// 과제 및 예습 : 2-10

#include <stdio.h>

int main()
{
    float k;
    float s;

    printf("f 입력 : ");
    scanf("%f", &k);

    printf("\ns 입력 : ");
    scanf("%e", &s);

    printf("\nk = %f, s = %e", k, s);

    return 0;
}