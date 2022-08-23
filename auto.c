#include<stdio.h>

int no=10;
void Demo()
{
    printf("inside main:\n");
    int a=20;
    auto int b =30;
    auto int z;

    printf("%d\n",z);
}

int main()
{
    int ivalue=400;
    printf("inside main:\n");

    Demo();

    return 0;
}