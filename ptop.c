#include<stdio.h>

int main()
{
    int no=10;
    int *iptr=&no;

    int **mptr=&iptr;

    int ***dptr=&mptr;

    printf("%d\n", dptr);
    printf("%d\n", *iptr);
    printf("%d\n", **mptr);
    printf("%d\n", ***dptr);

    return 0;

}