// 17.Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=1;
    for ( int i = 2; i < n; i++)
    {
       if(n%i==0)
       {
        flag=0;
        break;
       }
    }
    if(flag==1)
    {
        printf("Prime number");
    }
    else 
    printf("Not Prime number");
    
    return 0;
}