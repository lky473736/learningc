/*#include <stdio.h>
#define STR "pachiritsu dedenne"

void main()
{
    printf ("%s", STR);
}*/

#include <stdio.h>

void main()
{
    char str[19] = "pachiritsu dedenne";
    
    printf ("%s\n", str);
    
    for (int i = 0; i < 19; i++)
    {
        printf ("%c, %p\n", str[i], &str[i]);
    }
}
