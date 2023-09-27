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
                continue;
            case 3 :
                printf ("odd\n");
                continue;
            case 5 :
                printf ("odd\n");
                continue;
            default :
                printf ("even\n");
        }
    }
    return 0;
}
