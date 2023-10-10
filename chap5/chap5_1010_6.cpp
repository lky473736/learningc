#include <stdio.h>

int main()
{
    char c;
    
    while ((c = getchar()) != '\n') // EOF
    {
        putchar(c);
    }
    
    return 0;
}
