#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0;
    int *ptr=NULL;

    printf("Enter no of element :");
    scanf("%d\n",&a);

    ptr=(int *)calloc(a,a*sizeof(int));
    if (ptr==NULL)
    {
        printf("unable to allocate memory");

    }
    else
    {
        printf("memory allocated successfully");

    }

free(ptr);
return 0;

}