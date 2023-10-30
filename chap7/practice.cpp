#include <stdio.h>

int main()
{
    int arr1[9];
    int arr2[9];
    
    for (int k = 0; k < 9; k++)
    {
        arr1[k] = k + 1;
        arr2[k] = arr1[k];
    }
    
    for (int p = 0; p < 9; p++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf ("%d * %d = %d ", p + 1, j + 1, (p + 1) * (j + 1));
        }
        printf ("\n");
    }
    
    printf ("-----------\n");
    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf ("%d * %d = %d ", arr1[i], arr2[j], arr1[i] * arr2[j]);
        }
        printf ("\n");
    }
}
