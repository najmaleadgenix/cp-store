// 14.Write a C program to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int add=1;
    for(int i=1; i<=n; i++)
    {
        add*=i;
    }
    printf("%d",add);
    return 0;
}