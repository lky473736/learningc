/* chap4 연습문제 풀이
  1~4) 생략.

  5) 5는 홀수이기 때문에 else if에 대응되고, 따라서 odd가 출력된다.

  6) 아래에 작성.

  7) 입력값이 5보다 크면 입력값에 자신의 값과 5를 추가하여 대입한다. 그 값을 출력한다.

  8) 아래에 작성.

  9) break문을 사용하였기 때문에 switch문에서 자신의 해당 영역이 작동된 이후로는 후기 명령어가 사용되지 않는다. 
     따라서 kbs, sbs, mbc, sbs가 출력된다.
*/

/*#include <stdio.h>
 
int main()
{
    int x, y, z;
    int a = 0, b = 1, c = 2;
 
    scanf ("%d %d", &x, &y);
 
    if (x > y)
    {
        z = a;
    }
 
    else
    {
        if (x < y)
        {
            z = b;
        }
 
        else
        {
            z = c;
        }
    }
 
    printf ("%d", z);
}*/

/*#include <stdio.h>
 
int main()
{
    int x;
    x = getchar();
    
    switch(x)
    {
        case '1' :
            printf ("x -> 1\n");
            break;
            
        case '2' :
            printf ("x -> 2\n");
            break;
            
        default : 
            printf ("x -> 3\n");
            break;
    }
    
    return 0;
}*/
