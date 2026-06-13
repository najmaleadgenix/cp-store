
//n=10

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include<stdio.h>
int main()
{
    int n;
    // input even number
    scanf("%d",&n);
    int a=n/2;
    int b=a+1;
    int c=1;
    int d=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i>n/2)
            {
                if(j>c && j<d)
                printf(" ");
                else 
                printf("*");
            }
            else 
            {
                if(j>a && j<b)
                printf(" ");
                else 
                printf("*");
            }
        }
        printf("\n");
        a--;
        b++;
        if(i>n/2)
        {
            c++;
            d--;
        }
    } 
    return 0;
}