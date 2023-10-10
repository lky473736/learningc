/*
6. 사용자로부터 1에서 12 사이의 정수를 입력 받아 "Jan"과 같이 월을 출력하는 프로그램을 작성하라.[ switch 사용 ]

Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
*/

#include <stdio.h>

int main()
{
    double height, weight, standard;
    
    char status;
    
    scanf ("%lf", height);
    
    standard = (height - 100) * 0.9;
    
    scanf ("%lf", weight);
    
    status = (weight > standard) ? 'H' : (weight == standard) ? 'S' : 'L';
    
    printf ("당신의 상태는 (H : 과체중, S : 정상, L : 저체중) : %c", status);
    
    return 0;
}
