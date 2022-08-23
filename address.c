#include<stdio.h>

int main()
{
    int no=10;
    char ch='A';


    printf("value is :%d\n", no);
    printf("value is :%c\n", ch);

    printf("address is :%u\n", &no);
    printf("address is :%u\n", &ch);

    printf("size is :%d\n", sizeof(no));
    printf("size is :%d\n", sizeof(ch));

    return 0;
    
    
    



}