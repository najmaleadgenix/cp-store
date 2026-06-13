#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>0)
    {
        printf("POSITIVE\n");
    }
    else if(x<0)
    {
        printf("NEGATIVE\n");
    }
    else 
    printf("ZERO\n");
    return 0;
}