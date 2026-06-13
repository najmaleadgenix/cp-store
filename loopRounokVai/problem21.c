// 21.Write a C program to print Fibonacci series up to n terms.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long num1=0; 
    long long num2=1; 
    long long sum;
    // printf("%lld %lld %lld ",a,b,sum);
    for(int i=1; i<=n; i++)
    {
        printf("%lld ",num1);
         sum=num1+num2;
         num1=num2;
         num2=sum;
        
    }
    // printf("%lld",sum);

    return 0;
}