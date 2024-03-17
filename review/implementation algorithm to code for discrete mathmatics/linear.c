#include <stdio.h>

int linear(int x, int arr[10]);

int main()
{
    printf ("linear search algorithm\n");
    
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int location = linear(9, arr);
    
    printf ("location : %d", location + 1);
}

int linear (int x, int arr[10])
{
    int k = 0;
    int location = -1;
    
    while (k <= 10) 
    {
        if (arr[k] == x)
        {
            location = k;
        }
        
        k = k + 1;
    }
    
    return location;
}
