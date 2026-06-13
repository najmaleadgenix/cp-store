// 12.Write a C program to find power of a number using for loop.
#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    long long c=1;
    for(int i=0; i<b; i++)
    {
        c*=a;
    }
    printf("%lld",c);

    return 0;
}