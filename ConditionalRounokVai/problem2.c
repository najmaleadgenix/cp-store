#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%5==0 && x%11==0)
    {
        printf("YES\n");
    }
    else 
    printf("NO\n");
    return 0;
}