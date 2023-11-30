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
                break;
            case 3 :
                printf ("odd\n");
                break;
            case 5 :
                printf ("odd\n");
                break;
            default :
                printf ("even\n");
        }
    }
    return 0;
}

// break랑 continue의 차이

/* 복습
이래야 제대로 실행된다. 

반복문에 쌓여진 switch문에서 break와 continue의 차이는 제어의 이동이다.
break를 만나면 반복문을 탈출하지만, continue는 제어가 반복문을 감싸는 {} 중 }에 이동하여 반복문을 탈출한다.

반복문에 쌓여진 조건문에서는 break와 continue는 사뭇 다르다. 

for (int i = 0; i < 10; i++)
{
    printf ("%d", i);
    if (i == 4)
    {
        break;
    }
} // 이러면 i == 4일때 반복문을 "탈출"한다. 따라서 결괏값은 01234


for (int i = 0; i < 10; i++)
{
    if (i != 4)
    {
        printf ("%d", i);
    }
    else
    {
        continue;
    }
} // 이러면 i == 4일때 pass한다. 따라서 결괏값은 012356789
*/
