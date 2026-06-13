#include<stdio.h>
int main()
{
    
   double x;
   scanf("%lf",&x);

   if(x<=50)
   {
     x=x*0.5;
    //  printf("%d\n",x);
   }
   else if(x>50 && x<=150)
   {
     double t1=50*0.5;
     x=x-50;
     double t2=x*.75;
     x=t1+t2;
   }
   else if(x>150 && x<=250)
   {
     double t1=50*0.5;
     double t2=100*.75;
     x=x-50-100;
     double t3=x*1.2;
     x=t1+t2+t3;
   }
   else if(x>250)
   {
     double t1=50*0.5;
     double t2=100*.75;
     double t3=100*1.2;
     x=x-50-100-100;
     double t4=x*1.5;
     x=t1+t2+t3+t4;
   }
   x+=x*0.2;
   printf("%.2f",x);

    return 0;
}