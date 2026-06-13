#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((c*c==(a*a)+(b*b)) || (b*b==(a*a)+(c*c)) || (a*a==(b*b)+(c*c)))
    {
        printf("Right triangle\n");

        if(a==b || b==c || c==a)
        {
            printf("isosceles\n");
        }
        else if(a!=b!=c)
        {
            printf("scalene");
        }
    }
    else 
    printf("Not right triangle");
    
        return 0;
}