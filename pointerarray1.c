#include<stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};

    int *p=arr[0];
    int *q=arr[4];

    printf("value of p before increment:%d\n", p);
    p++;    //postincrement

    printf("value of p after increment: %d\n", p);



    printf("value of q before decrement:%d\n", q);
    
    q--;

        printf("value of q before increment:%d\n", q);

return 0;

}