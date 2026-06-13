//n=5

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int a=n-1;
   int b=1;
    for(int i =1; i<2*n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i<=n)
            {
                if(a>=j)
                printf(" ");
                else
                printf("* ");
            }
            else if(i>n)
            {
                if(j<=b)
                printf(" ");
                else
                printf("* ");
            }
        }
        if(i<=n)
        a--;
        else if(i>n)
        b++;
        printf("\n");
    }
    return 0;
}