#include<stdio.h>

struct demo
{
    int i;
    struct demo *ptr;

};

int main()
{
    struct demo dobj1,dobj2,dobj3;
    struct demo *ptr=&dobj1;

    dobj1.i=11;
    dobj1.ptr=&dobj2;
    
    dobj2.i=21;
    dobj2.ptr=&dobj3;

    dobj3.i=51;
    dobj3.ptr=NULL;

    printf("%d\n", &dobj2);
    printf("%d\n", dobj2.ptr);
    printf("%d\n", dobj1.ptr->ptr->i);
    printf("%d\n", &dobj2);



    return 0;



    
}