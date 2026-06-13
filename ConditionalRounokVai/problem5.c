#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%4==0 && x%100!=0)
    {
        printf("Is leap year");
    }
    else if(x%400==0)
    {
        printf("Is leap year");
    }
    else 
    printf("Is not leap year");
    return 0;
}