//n=5

// *******
//  ******
//   *****
//    ****
//     ***
//      **
//       *
//      **
//     ***
//    ****
//   *****
//  ******
// *******

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    int b=n-2;

    for(int i=1;i<2*n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=n)
            {
                if(j<=a)
                printf(" ");
                else 
                printf("*");
            }
            else
            {
                if(j<=b)
                printf(" ");
                else
                printf("*");
            }
        }
        if(i<=n)
        a++;
        else
        b--;
        printf("\n");
    }
    return 0;
}