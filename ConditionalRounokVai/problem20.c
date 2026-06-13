#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int sum=0;
    if(x==0)
    {
        printf("Harshad number");
    }
    else if(x<100 && x>=1)
    {
        int rem=x%10;
        x=x/10;
        sum=rem+x;
        // printf("%d\n",sum);
        if(sum==x)
        {
            printf("Harshad number");
        }
        else 
        printf("Not Harshad number");
    }
    return 0;
}