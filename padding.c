#include<stdio.h>
//#pragma pack(1)

struct demo
{
    int i;
    char ch;
    double d;

};

int main()
{
    printf("%d\n", sizeof(struct demo));
    return 0;
    
}