#include<stdio.h>

struct Hello                    // outer structure
{
    int no;
    float f;
    struct demo             // inner structure
    {
        int i;
        int j;

    }dobj;

};
int main()
{
    struct Hello hobj;

    hobj.no=10;
    hobj.f=1.1;
    hobj.dobj.i=20;
    hobj.dobj.j=30;

    printf("value is:%d\n", hobj.dobj.i);
    printf("value is:%d\n", sizeof(hobj));


    return 0;
    
}