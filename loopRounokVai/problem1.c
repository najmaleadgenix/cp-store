// 1. Write a C program to print all natural numbers in reverse (from n to 1). – using loop
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}