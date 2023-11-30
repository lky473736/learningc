#include <stdio.h>

int main()
{
    int i;
    
    for (i = 1; i < 6; i = i + 1)
    {
        switch (i) 
        {
            case 1 :
                printf ("odd\n");
            case 3 :
                printf ("odd\n");
            case 5 :
                printf ("odd\n");
            default :
                printf ("even\n");
        }
    }
    return 0;
}

/* 복습
switch문에서 break를 사용하지 않으면, 해당 케이스에 변수 대응이 성공할 시에 그 이하의 영역까지 작동한다. 
위 코드로 예를 들었을 때, 

i = 1이면 case 1에 대응 성공 -> odd, odd, odd, even 출력
i = 2이면 아무 case에도 대응 안됨 -> even 출력
i = 3이면 case 3에 대응 성공 -> odd, odd, even 출력 
...
*/
