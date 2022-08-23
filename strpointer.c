#include<stdio.h>

struct demo
{
    int *ip;
    float *fp;

};

int main()
{
    struct demo dobj;

    int i=10;
    float f=2.2;
    int j=30;

    dobj.ip=&i;
    dobj.fp=&f;

    printf("%d\n",dobj.ip);
    printf("%d\n",j);

    return 0;
    


}