/*
6. 사용자로부터 1에서 12 사이의 정수를 입력 받아 "Jan"과 같이 월을 출력하는 프로그램을 작성하라.[ switch 사용 ]

Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
*/

#include <stdio.h>

int main()
{
    int month;
    
    scanf("%d", &month);
    
    switch (month)
    {
        case 1:
            printf("January");
            break;
            
        case 2:
            printf("February");
            break;
            
        case 3:
            printf("March");
            break;
            
        case 4:
            printf("April");
            break;
            
        case 5:
            printf("May");
            break;
            
        case 6:
            printf("June");
            break;
            
        case 7:
            printf("July");
            break;
            
        case 8:
            printf("August");
            break;
            
        case 9:
            printf("September");
            break;
            
        case 10:
            printf("October");
            break;
            
        case 11:
            printf("November");
            break;
            
        case 12:
            printf("December");
            break;
            
        default:
            printf("What?");
    }
    
    return 0;
}
