#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    x=sqrt(x);
    if(x==(int)x)
    {
        printf("perfect square number");
    }
    else 
    printf("Is not perfect square number");

    return 0;
}