#include <stdio.h>

void sum_rest (int a, int b, int *sum);

void main()
{
    int a;
    int b;
    int sum;
    
    scanf ("%d %d", &a, &b);
    
    sum_rest(a, b, &sum);
    
    printf ("sum of rest = %d", sum);
}

void sum_rest (int a, int b, int *sum) 
{
    if (a < b)
    {
        for (int i = 1; i <= a; i++)
        {
            *sum += (b % i);
        }
    }
    
    else if (a > b)
    {
        for (int j = 1; j <= b; j++)
        {
            *sum += (a % j);
        }
    }
    
    else
    {
        printf ("same\n");
    }
}
