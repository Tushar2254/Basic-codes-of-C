#include<stdio.h>

struct demo
{
    int arr[3];
    float brr[2];
    struct hello
    {
        int i;
        int j;

    }hobj;

};
int main()
{
    struct demo obj;

    obj.arr[0]=10;
    obj.arr[1]=20;
    obj.arr[2]=30;
   // hobj.arr[3]=40;
   obj.hobj.i=600;


    obj.brr[0]=1.1;
    obj.brr[1]=2.1;
   // hobj.brr[2]=3.1;
    printf("array is:%d\n", obj.arr[1]);
        printf("array is:%d\n",obj.hobj.i);


    return 0;

}
