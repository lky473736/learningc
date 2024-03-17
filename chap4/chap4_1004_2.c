#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    
k:  i += 1;
    sum += i;
    
    if (i < 10) 
    {
        goto k;
    }
    
    printf ("%d", sum);
    
    return 0;
}

// 이걸 for문, while문, do-while문으로 바꿀 수 있어야 함.

/* 복습
(for문)
#include <stdio.h>

int main()
{
    int suma = 0;
    
    for (int i = 1; i <= 10; i++)
    {
        suma += i;
    }
    
    printf ("%d", suma);
}

(while문)
#include <stdio.h>

int main()
{
    int suma = 0, i = 1;
    
    while (i <= 10)
    {
        suma += i;
        i++;
    }
    
    printf ("%d", suma);
}

(do-while문)
#include <stdio.h>

int main()
{
    int suma = 0, i = 1;
    
    do
    {
        suma += i++;
    } while (i <= 10);
    
    printf ("%d", suma);
}
