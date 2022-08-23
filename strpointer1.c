#include<stdio.h>

struct demo
{
    int *iptr;
    float *fptr;

};

int main()
{
    struct demo dobj;
    int x=10;
    float z=1.1;

    dobj.iptr=&x;
    dobj.fptr=&z;

    printf("%d\n", dobj.iptr);
        printf("%d\n", sizeof(struct demo));


    return 0;
    
}
