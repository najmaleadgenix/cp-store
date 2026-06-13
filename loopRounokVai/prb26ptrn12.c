//n=7

// ***************
//  *           *
//   *         *
//    *       *
//     *     *
//      *   *
//       * *
//        *

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    int b=2*n-5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++)
        {
            if(i==1)
            printf("*");
            else if(j<=a)
            printf(" ");
            else if(j==a+1)
            printf("*");
            else if(j>a+1 && j<=a+1+b)
            printf(" ");
            else if(j==a+1+b+1)
            printf("*");
           
        }
        a++;
        if(i!=1 && i!=n)
        b-=2;
        printf("\n");
    }
    return 0;
}