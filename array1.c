#include<stdio.h>

int main()
{
    int A=10;

    int Arr[5];

    Arr[0]=10;
    Arr[1]=20;
    Arr[2]=30;      // array initialization member by member
    Arr[3]=40;
    Arr[4]=50;

    int Brr[3]={1,2,3};    // array initialization LIST
    int Crr[]={6,7};       // allowed
    int Drr[];             // not allowed

    printf("%d\n", Arr);
    printf("%d\n", Brr[2]);   
    printf("%d\n", Crr[1]);
    printf("%d\n", Drr);            //error




return 0;

}

