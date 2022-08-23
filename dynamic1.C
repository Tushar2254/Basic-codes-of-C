#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0;
    int *ptr=NULL;


    printf("Enter the value:\n");
    scanf("%d",&a);

    ptr=(int*)malloc(a*sizeof(int));
    if(ptr==NULL)
    {
        printf("unable to allocate memory\n");

    }
    else
    {
        printf("memory allocated succesfully\n");
    }

    free(ptr);
    return 0;
    
}