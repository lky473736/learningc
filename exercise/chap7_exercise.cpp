/* 
  1) 배열은 기억장소에서 일정 주소에 블록 형태로 component를 저장하는 자료형의 일종이다. C언어는 row-oriented 방식을 채택하고 있어서 배열에 component를 저장할 때 mapping된 index를 0부터 저장하게 된다.
     그 중에서 1차원 배열은 row가 하나만 있는 형태로써, 가장 기본적인 배열이다. (자료형 선언) (배열명)[배열의 크기값];으로 선언할 수 있다.

     component를 저장하는 방법은 대입법과 선언명령이 있다.

     i) 대입법 
       int arr[3];
       arr[0] = 1;
       arr[1] = 2;
       arr[2] = 3;

     ii) 선언명령
       int arr[3] = {1, 2, 3};

  2) 아래에 주석에 작성.

  3) 문자열을 처리하는 방법은 처음에 프리프로세서를 사용하여 매소드로 선언하는 방법과 문자열 배열을 만드는 방법이 있다.

      i) 매소드로 선언하는 방법
        #define STR "fast daramji"

        main ...
        printf ("%s", STR);

      ii) 문자열 배열을 만드는 방법
        main ...
        char STR[] = "fast daramji";
        printf ("%s", STR);

    어떤 배열의 배열명은 배열의 시작주소값을 지닌다. 따라서 p = STR이라 선언명령을 내리게 된다면, p[0] = f, p[1] = a... 가 된다.
    문자열 배열의 마지막 component는 항상 널문자를 가진다. 따라서 배열의 크기는 (문자열의 문자 수 + 널문자 1문자) * byte가 된다.

  4) 아래 프로그램은 5번째 줄에서 indent가 되어 있지 않아, 오류가 생긴다. 
     indent를 넣었다고 가정한다면, arry[0] = 0, arry[1] = 1, arry[2] = 4, arry[3] = 9, arry[4] = 16이 된다.
     각자 기억장소마다 4바이트씩 차이난다.

  5) 배열 안의 component의 총합을 구하는 프로그램이다. sum에 누적되어 최종적으로 25가 출력된다.

  6 ~ 8) 아래에 주석에 작성.
  */

/* 2)
#include <stdio.h>

void main()
{
    int i[] = {4, 9, 5, 3, 6, 1, 7, 6, 9, 7};
    int sum = 0;
    
    for (int j = 0; j <= 9; j++)
    {
        sum += i[j];
    }
    
    printf ("%d", sum);
}
*/

/* 6)
#include <stdio.h>

void main()
{
    int a[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        
        printf ("row %d : sum = %d\n", i + 1, sum);
    }
}
*/

/* 7)
#include <stdio.h>
#include <string.h>

void main()
{
    char str[10];
    
    gets (str);
    
    int length = strlen(str);
    
    for (int i = 0; i < length; i++)
    {
        putchar (str[i]);
    }
}
*/

/* 8)
#include <stdio.h>
#include <string.h>

void main()
{
    int multiplication_table[9][9];
    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            multiplication_table[i][j] = (i + 1) * (j + 1);
        }
    }
    
    for (int p = 0; p < 9; p++)
    {
        for (int q = 0; q < 9; q++)
        {
            printf ("%d * %d = %d ", p + 1, q + 1, multiplication_table[p][q]);
        }
        printf ("\n");
    }
}
*/


  
