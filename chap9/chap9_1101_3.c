#include <stdio.h>

long fact(long c); 

int main()
{
    int count, value;
    
    for (count = 0; count <= 10; count++)
    {
        value = fact (count);
        printf ("%d! = %d\n", count, value);
    }
    return 0;
}

long fact (long c) // long형으로 return해준다
{
    // return ((c == 0) ? 1 : c * fact(c - 1)); <-- recursive call (자기 자신을 호출)
    int retval = 1;
    
    while (c != 0)
    {
        retval *= c;
        c--;
    }
    
    return retval;
}

/* 복습
factorial을 계산하기 위해 재귀함수를 사용하거나 반복문을 사용할 수 있다. 아래는 재귀함수를 사용한 코드이다.

#include <stdio.h>

int fact (int n);

int main()
{
    printf ("%d", fact(10));
}

int fact (int n)
{
    if (n == 1)
    {
        return 1;
    }

    else 
    {
        return n * fact (n-1);
    }
}
*/
