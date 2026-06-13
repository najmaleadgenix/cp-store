//n=5

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
   int a=0;
    for(int i =1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j>a)
            printf("* ");
            else
            printf(" ");
        }
        a++;
        printf("\n");
    }
    return 0;
}