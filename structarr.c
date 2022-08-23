#include<stdio.h>

struct hello 
{
    int i;
    int j;

};
 struct hello arr[4];

 int main()
 {

 arr[0].i=10;
 arr[1].i=20;
 arr[2].i=30;
 arr[3].i=40;
 arr[60].i=60;

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);

    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
        printf("%d\n", arr[60]);



    return 0;
    
}