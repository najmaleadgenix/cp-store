// 9. Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cpy=n;
    int res=0;
    while(n!=0)
    {
        int rem=n%10;
        res= rem+(res*10);
        n/=10;
    }
    // printf("%d",res);
    // printf("%d",n);
    if(res==cpy)
    {
        printf("palindrome");
    }
    else 
    printf("Not palindrome");
    return 0;
}