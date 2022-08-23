#include<stdio.h>

void Demo()
{
    auto int a=10;
    register int b=20;
}

int main()
{
    Demo();

    printf("%d",a);
   printf("%d",b);      // NA    scope-throughout function error
    return 0;
    
}