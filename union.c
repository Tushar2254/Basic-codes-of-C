#include<stdio.h>
struct demo
{
    int i;
    char ch ;
    float f;
   
   double d;

};

union hello
{
    int a;
    char c;
    float fl;
    double dl;

};

int main()
{
    printf("%d\n", sizeof(struct demo));


    printf("%d\n", sizeof(union hello));
    return 0;

}