/*
2개의 정수의 합과 차를 동시에 반환하는 함수 get_sum_diff()를 작성하고 결과를 확인하라. (포인터 매개변수 사용)  
*/

#include <stdio.h>

void get_sum_diff(int *p, int *q, int *sum, int *diff);

int main() {
    int a, b;
    int sum, diff;
    int *p, *q;

    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;

    get_sum_diff(p, q, &sum, &diff);

    printf("%d\n", sum);
    printf("%d\n", diff);

    return 0;
}

void get_sum_diff(int *p, int *q, int *sum, int *diff) {
    *sum = *p + *q;
    *diff = *p - *q;
}
