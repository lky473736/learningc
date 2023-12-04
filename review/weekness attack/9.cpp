// exercise 9. 문자열 다루기

#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "gachon";
    char b[] = "catholic";
    
    printf ("%ld %ld\n", strlen(a), strlen(b));
    
    if (strcmp(a, b) > 0)
    {
        printf ("gachon bigger\n");
    }
    
    else 
    {
        printf ("catholic bigger\n");
    }
    
    strcpy (b, a);
    printf ("%s\n", b);
    
    printf ("%s", strcat(a, b));
}
