#include <stdio.h>

int findmax(int arr[10]);

int main() {
    printf ("findmax algorithm\n");
    
    int input[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = findmax (input);
    printf ("k : %d", k);
    
    return 0;
}

int findmax (int arr[10]) {
    int M = arr[0];
    int k = 0;
    
    while (k != 10) {
        if (M <= arr[k])
        {
            M = arr[k];
        }
        k = k + 1;
    }
    
    return M;
}
