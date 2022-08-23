#include<stdio.h>

int main()
{
    int a=10;
    int b=10;
    int ans1=0;
    int ans2=0;

    ans1=--a;  //predecrement
    printf("value of a:%d\n", a);
    printf("value of ans:%d\n", ans1);

    ans2=b--;  //postdecrement
    printf("value of a:%d\n", b);
    printf("value of ans:%d\n", ans2);

    return 0;
    

}