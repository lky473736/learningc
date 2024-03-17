#include <stdio.h>

void k();
void a();
void b();
void c();
void a1();
void a2();
void b1();
void b2();
void c1();
void c2();

void main()
{
    k();
}

void k()
{
    int p;
    scanf ("%d", &p);
    
    switch (p) 
    {
        case 1 :
            a(); break;
            
        case 2 :
            b(); break;
        
        case 3 :
            c(); break;
            
        default : 
            break;
    }
}

void a()
{
    int p;
    scanf ("%d", &p);
    
    switch (p)
    {
        case 1 : 
            a1(); break;
            
        case 2 :
            a2(); break;
            
        default :
            break; 
    }
}

void b()
{
    int p;
    scanf ("%d", &p);
    
    switch (p)
    {
        case 1 : 
            b1(); break;
            
        case 2 :
            b2(); break;
            
        default :
            break;
    }
}

void c()
{
    int p;
    scanf ("%d", &p);
    
    switch (p)
    {
        case 1 : 
            c1(); break;
            
        case 2 :
            c2(); break;
            
        default :
            break;
    }
}

void a1()
{
    printf ("a1");
}

void a2()
{
    printf ("a2");
}

void b1()
{
    printf ("b1");
}

void b2()
{
    printf ("b2");
}

void c1()
{
    printf ("c1");
}

void c2()
{
    printf ("c2");
}
