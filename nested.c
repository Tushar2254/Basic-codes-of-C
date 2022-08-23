#include<stdio.h>

struct demo
{
    int i;
    int j;
    //struct demo dobj;
    
};

struct hello
{
    int x;
    int z;
    struct demo dobj;

};

struct abc
{
    int a;
    int b;
    struct hello hobj;
};

int main()
{ 
   // struct hello aobj;

   // aobj.dobj.i=10;
    struct abc cobj;

    cobj.a=40;


   // printf("%d\n",aobj.dobj.i);
    printf("%d\n",cobj.a);

    return 0;

}
