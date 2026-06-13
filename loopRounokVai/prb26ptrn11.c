//n=5

//     *
//    * *
//   *   *
//  *     *
// *********


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n-1;
    int b=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<2*n; j++)
        {
           if(i==n)
           printf("*");
           else if(i==1)
           {
                if(j<=a)
                printf(" ");
                else if(j==a+1)
                printf("*");
           }
           else
           {
                if(j<=a)
                printf(" ");
                else if(j==a+1)
                printf("*");
                else if(j>a+1 && j<=a+1+b)
                printf(" ");
                else if(j==a+1+b+1 )
                printf("*");
           }

        }
        a--;
        if(i!=1 && i!=n)
        b+=2;
        printf("\n");
    }
    return 0;
}