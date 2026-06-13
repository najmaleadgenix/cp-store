// 23.Write a C program to convert a binary number into decimal.
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    int sum=0;
    while(n!=0)
    {
        int rem=n%10;
        // printf("%d ",rem);
        int res=pow(2,x);
        // printf("%d ",res);
        rem = rem * res;
        // printf("%d ",rem);
        sum+=rem;
        n/=10;
        x++;
        

    }
    printf("%d",sum);
    return 0;
}