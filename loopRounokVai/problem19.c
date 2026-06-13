// 19.Write a C program to find all prime factors of a number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2)
    {
        printf("%d",2);
    }
    
    for(int i=2; i<n; i++)
    {
        int temp=0;
        if(n%i==0)
        {
            temp=i;
        }
        int flag=1;
        for(int j=2; j<temp; j++)
        {
            if(temp%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            if(temp!=0)
            printf("%d\n",temp);
        }
    }

    return 0;
}