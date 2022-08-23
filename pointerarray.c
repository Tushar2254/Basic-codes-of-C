#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};

    int *p = arr[0];
    int *q = arr[4];

    printf("value between p and q is:%d\n", q-p);

    printf("value of p is:%d\n", p);

    p=p+3;

    printf("value of p is:%d\n", p);

        printf("value of q is:%d\n", q);


    q=q-3;

    printf("value of q is:%d\n", q);

return 0;




}