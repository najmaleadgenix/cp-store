#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>99 && x<1000)
    {
    x=x/100;
    printf("%d",x);
    }
    else 
    printf("Not in the range");
    return 0;
}