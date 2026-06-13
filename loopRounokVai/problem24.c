// 24.Write a C program to convert a decimal number into binary.
#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long fre[256]={0};
    long long i=0;
    long long count=0;
    while(n!=0)
    {
        long long rem=n%2;
        fre[i]=rem;
        i++;
        count++;
        n/=2;
    }
    for(int i=count-1; i>=0; i--)
    {
        printf("%lld ",fre[i]);
    }
    return 0;
}