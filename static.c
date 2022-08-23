#include<stdio.h>

void Demo()
{
    auto int a=10;
    static int b=20;

    a=a+1;
    b=b+1;

    printf("%d\n",a);
    printf("%d\n",b);

}

int main()
{

    printf("inside main:%d\n");

    Demo();
    Demo();
    Demo();
    Demo();

    return 0;

}