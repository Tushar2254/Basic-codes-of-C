#include<stdio.h>

int main()
{
    int Arr[5];

    Arr[0]=1;
    Arr[1]=2;

printf("Address of array:%d\n",Arr[3]);
    printf("Address of array:%d\n",&Arr);
    printf("size of array:%d\n",(sizeof(Arr)));


    return 0;

}