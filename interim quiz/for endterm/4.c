/*
   사용자로부터 2개의 정수를 받아오는 함수를 작성하라.  함수의 원형은 아래와 같다.

   void get_int(int *px, int *py);

*/

#include <stdio.h>

void get_int(int *px, int *py);

void main()
{
    int x, y;
    int *locationx, *locationy;
    
    locationx = &x;
    locationy = &y;
    
    get_int(locationx, locationy);
    
    printf ("%d %d", x, y);
}

void get_int(int *px, int *py)
{
    scanf ("%d", px);
    scanf ("%d", py);
}
