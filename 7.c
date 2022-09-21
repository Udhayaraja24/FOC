#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    sum=(n*n)*((n+1)*(n+1))/4;
    printf("sum of cube of %d ",sum);
}
