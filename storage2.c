#include<stdio.h>

void Demo()
{
    auto int A=10;
    A++;
    printf("%d\n",A);

}

void Hello()
{
    static int B=20;
    B++;
    printf("%d\n",B);

}

int main()
{
    Demo();
    Demo();

    Hello();
    Hello();
    Hello();
    

    return 0;
}