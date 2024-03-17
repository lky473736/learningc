#include <stdio.h>

int main()
{
    char a, b;
    int i;
    
    for (i = 1; i < 6; i++) 
    {
        scanf("%c", &a); 
        b = getchar(); // <--- 버퍼 처리를 위해서 (만약 없으면 이상해짐)
        // int _=getchar();도 같은 의미
        
        switch (a) 
        {
            case '1' : printf ("1...\n"); 
            case '2' : printf ("2...\n"); 
            default : printf ("not 1, 2...\n"); 
        }
    }
    
    return 0;
}

/* break이 없을 땐 

1
1...
2...
not 1, 2...
2
2...
not 1, 2...
3
not 1, 2...
4
not 1, 2...
5
not 1, 2...
*/

/* break이 있을 땐 

1
1...
2
2...
3
not 1, 2...
4
not 1, 2...
5
not 1, 2...*/
