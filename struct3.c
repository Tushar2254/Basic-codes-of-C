#include<stdio.h>

struct hello
{
    int i;
    int j;

};

int main()
{
    const struct hello hobj={10,20};
   // hobj.i++;

    printf("value is:%d\n", hobj.i);
    printf("value is:%d\n", hobj.j);

    return 0;
    
}