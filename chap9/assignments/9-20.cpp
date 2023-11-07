/* <아래같이 하면 null문자만 출력됨>
#include <stdio.h>

char *get(char c);

void main()
{
    char c, *val;
    
    c = getchar();
    
    val = get(c);
    
    printf ("%s", val);
}

char *get(char c)
{
    char arr[6];
    
    for (int i = 0; i < 5; i++)
    {
        arr[i] = c + i;
    }
    arr[5] = '\0'; // 널문자 삽입해서 문자열 설정
    
    return(arr);
}
*/

#include <stdio.h>

void *get(char c);

void main()
{
    char c;
    
    c = getchar();
    
    get(c);
}

void *get(char c)
{
    char arr[6];
    
    for (int i = 0; i < 5; i++)
    {
        arr[i] = c + i;
    }
    arr[5] = '\0'; // 널문자 삽입해서 문자열 설정
    
    printf ("%s", arr);
}
