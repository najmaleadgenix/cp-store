// 5. Write a C program to print multiplication table of any number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}