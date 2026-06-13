
// n=7

// *******
//  *     *
//   *     *
//    *     *
//     *     *
//      *     *
//       *******


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0;
    int b=n-2;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<2*n; j++)
        {
            
            
             if(j<=a)
             printf(" ");
             else if(j==a+1)
             printf("*");

             if(i!=1 && i!=n)
            {  
                if(j>a+1 && j<=a+1+b)
                printf(" ");
                else if(j==a+1+b+1)
                printf("*");
            }
            else
            {
                if(j>a+1 && j<a+1+n)
                printf("*");
            }
        }
        a++;
        printf("\n");
    }
    return 0;
}