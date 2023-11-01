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
