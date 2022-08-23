#include<stdio.h>

int Addition(int A,int B)
{
    int ans=0;
    ans= A+B;

    return ans;
}

int main()
{
    int A=10,B=21,C=0;
    C= Addition(A,B);

    printf("%d",C);

    return 0;

}