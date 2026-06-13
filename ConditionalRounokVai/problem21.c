#include<stdio.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(b>c && d>a && (c+d)>(a+b) && c>0 && d>0 && a%2==0)
    {
        printf("yes");
    }
    else 
    printf("no");
    return 0;
    
}