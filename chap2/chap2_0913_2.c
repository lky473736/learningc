// 0913 실습 2

#include <stdio.h>

int main()
{
    int val;
    enum kw {k = 10, y, u = 30, n, g};
    
    val = k;
    printf ("%d\n", val);
    
    val = n;
    printf ("%d\n", val); // 열거형 enum은 수에 대한 indexing이 전의 indexing보다 하나씩 늘어나는 특징 지님.
    // 예를 들어 enum example {k = 1, b, s = 4, p}
    // 여기서 b = 2, p = 5
}

/* 복습
열거형 변수들에 값을 지정하면 다음 변수는 그 값에 연속되는 값으로 대응이 된다.
*/
