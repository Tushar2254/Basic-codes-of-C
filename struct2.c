#include<stdio.h>
#pragma pack(5)

struct demo
{
    int i;
    char ch;
    float f;
    int j;

};

int main()
{
    printf("size of function is:%d\n", sizeof(struct demo));
    return 0;
    
}
