#include <stdio.h>

int binary(int x, int arr[10]);

int main()
{
    printf ("binary search algorithm\n");
    
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int location = binary(9, arr);
    
    printf ("location : %d", location);
}

int binary (int x, int arr[10])
{
    int start = 0;
    int end = 9;
    
    int k = 1;
    int mid;
    int ori_mid;
    
    while (k <= 10)
    {
        ori_mid = (start + end) / 2;
        mid = (int)ori_mid;
        
        if (mid > x)
        {
            end = mid;
        }
        
        else if (mid < x)
        {
            start = mid;
        }
        
        else 
        {
            return mid;
        }
        
        k = k + 1;
    }
}
