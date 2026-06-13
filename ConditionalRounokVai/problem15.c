#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double a,b,c,d,r1,r2,r3;
    scanf("%lf %lf %lf",&a,&b,&c);
    d= pow(b,2)-(4*a*c);
    if(a==0)
    {
        printf("No real root");
        return 0;
    }
    if(d<0)
    {
        d=abs(d);
        d=sqrt(d);
        r1=(-b)/(2*a);
        r2=(d)/(2*a);
        r3=(-d)/(2*a);
        printf("%.2f + %.2fi\n",r1,r2);
        printf("%.2f + %.2fi",r1,r3);
        // printf("No real root");
    }
    else if(d>=0)
    {
        d=sqrt(d);
        r1=(-b+d)/(2*a);
        r2=(-b-d)/(2*a);
        printf("%.2f %.2f",r1,r2);
    }
    return 0;
}