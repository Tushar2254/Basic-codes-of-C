#include<stdio.h>

int Addition(int A, int B)
{
    int ans=0;
    ans=A+B;
     return ans;

}

int main()
{
    int x=10;
    int y=20;
    int z=0;

   // z=Addition(x,y);

     int(*fptr)(int,int);
    fptr=Addition;
    printf("address of Addition function is:%d\n", Addition);

    z= fptr(x,y);
     printf("Addition is:%d\n", z);
    return 0;
     
}