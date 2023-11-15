#include <stdio.h>
#include <stdlib.h>

struct list 
{
    char *nam;
    char *tel;
};

struct list *nalloc();
struct list *inp(struct list *m);

void main()
{
    struct list *p, *man;
    man = NULL;
    p = inp(man);
    printf ("------------------\n");
    printf ("%s %s\n", p->nam, p->tel);
    free(p);
}

struct list *inp (struct list *m)
{
    char *name1 = (char *)malloc(10);
    char *tel1 = (char *)malloc(10);
    m = nalloc();
    scanf ("%s %s", name1, tel1); // scanf_s할 때에는 크기 지정 시 sizeof보다는 숫자로 하는게 좋음
    m->nam = name1;
    m->tel = tel1;
    return (m);
}

struct list *nalloc()
{
    return ((struct list *)malloc(sizeof(struct list)));
}
