#include<stdio.h>
int main()
{
    
    float x,hra,da;
    scanf("%f",&x);
    if(x<=10000)
    {
        hra=(x*20)/100;
        da=(x*80)/100;
    }
    else if(x<=20000)
    {
        hra=(x*25)/100;
        da=(x*90)/100;
    }
    else if(x>20000)
    {
        hra=(x*30)/100;
        da=(x*95)/100;
    }
    printf("Gross Salary: %.2f",x+hra+da);

    return 0;
}