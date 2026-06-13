// 15.Write a C program to find GCD of two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int n1,n2;
    if(a>=b)
    {
        n1=a;
        n2=b;
    }
    else 
    {
        n1=b;
        n2=a;
    }
    while(n2!=0)
    {
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("%d",n1);
    return 0;
}