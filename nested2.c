#include<stdio.h>

struct demo
{
    int i;
    int j;

};
struct hello
{
    int a;
    int b;
    struct demo aobj;
};
struct abc
{
    int e;
    int c;
    struct hello cobj;
};
int main()
{
    struct abc hobj;

    hobj.cobj.aobj.i=1;
    hobj.cobj.a=2;
    hobj.e=3;

    printf("%d\n", hobj.cobj.aobj.i);
        printf("%d\n", hobj.cobj.a);
        printf("%d\n", hobj.e);


    return 0;
    
}