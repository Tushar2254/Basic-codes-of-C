#include<stdio.h>

int main()
{

    char ch='A';
    char *cptr=&ch;

    int no=10;
    int *iptr=&no;

    float f=1.1;
    float *fptr=&f;

    double d=22.22;
    double *dptr=&d;

   
    printf("%c\n",*cptr);
    printf("%d\n",&ch);
    printf("%d\n",cptr);
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(cptr));
    printf("%d\n",sizeof(*cptr));

    return 0;

}