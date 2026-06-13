// 10.Write a C program to find frequency of each digit in a given integer.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,
     count6=0,count7=0,count8=0, count9=0;
    while(n!=0)
    {
        int rem=n%10;
        if(rem==0)
        {
            count0++;
        }
        else if(rem==1)
        {
            count1++;
        }
        else if(rem==2)
        {
            count2++;
        }
        else if(rem==3)
        {
            count3++;
        }
        else if(rem==4)
        {
            count4++;
        }
        else if(rem==5)
        {
            count5++;
        }
        else if(rem==6)
        {
            count6++;
        }
        else if(rem==7)
        {
            count7++;
        }
        else if(rem==8)
        {
            count8++;
        }
        else if(rem==9)
        {
            count9++;
        }
        n/=10;
    }
    
        printf("%d is = %d\n",0,count0);
        printf("%d is = %d\n",1,count1);
        printf("%d is = %d\n",2,count2);
        printf("%d is = %d\n",3,count3);
        printf("%d is = %d\n",4,count4);
        printf("%d is = %d\n",5,count5);
        printf("%d is = %d\n",6,count6);
        printf("%d is = %d\n",7,count7);
        printf("%d is = %d\n",8,count8);
        printf("%d is = %d\n",9,count9);
    return 0;
}