
// n=5

// *****
//  *****
//   *****
//    *****
//     *****

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0;
    int b=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<2*n; j++)
        {
           if(j<=a)
           printf(" ");
           else if(j>a && j<=a+b) 
           printf("*");

        }
       a++;
        printf("\n");
    }
    return 0;
}