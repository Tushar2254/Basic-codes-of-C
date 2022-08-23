#include<stdio.h>

struct hello

{
    int i;
    int j;

}hobj;

int main()
{
    struct hello hobj={10,20};

    struct hello *p=&hobj;

   // p->i=20;
    
    
        printf("%d\n", hobj.i);
        printf("%d\n", hobj.j);

        printf("%d\n", *p);

    return 0;

}