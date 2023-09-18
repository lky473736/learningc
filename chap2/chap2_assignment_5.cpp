// 0913 과제 2

#include <stdio.h>

int main()
{
    char ch1 = ',';
    printf ("ch = %d\n', ch1);
}

// 애초에 %d는 정수형을 출력하는 것인데 어떻게 출력할 수 있는가?

/*
  
input
stderr
Compilation failed due to following error(s).main.c: In function ‘main’:
main.c:8:13: warning: missing terminating " character
    8 |     printf ("ch = %d\n', ch1);
      |             ^
main.c:8:13: error: missing terminating " character
    8 |     printf ("ch = %d\n', ch1);
      |             ^~~~~~~~~~~~~~~~~~
main.c:9:1: error: expected expression before ‘}’ token
    9 | }
      | ^
main.c:8:13: error: expected ‘;’ before ‘}’ token
    8 |     printf ("ch = %d\n', ch1);
      |             ^
      |             ;
    9 | }
      | ~            
      */
