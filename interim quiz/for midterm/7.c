/*
7. 사용자로부터 키를 입력 받아서 표준 체중을 계산한 후 사용자의 체중과 비교하여 저체중인지, 표준인지, 과제중인지 판단하는 프로그램을 작성하라.

   ( 표준체중 = ()키 -100) * 0.9   
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
