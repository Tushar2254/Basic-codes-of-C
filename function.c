#include<stdio.h>

// int Addition(int , int);

int main()
{
    int a=10;
    int b=20;
    int ret=0;
     ret= Addition(a,b);

     printf("%d\n",ret);

     return 0;

}

int Addition(int no1, int no2)
{
int ans=0;
ans=no1+no2;

return ans;

}