// n=5

// 1       1
//  2     2
//   3   3
//    4 4
//     5
//    4 4
//   3   3
//  2     2
// 1       1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   int a=0;
   int b=(2*n)-3;
   int num=1;
   int c=n-2;
   int num2=n-1;
   int d=1;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++)
        {
            if(i<=n)
            {
                if(j<=a)
                printf(" ");
                else if(j==a+1)
                printf("%d",num);
                else if(j>a+1 && j<=a+1+b)
                printf(" ");
                else if(j==a+1+b+1)
                printf("%d",num);
            }
            else 
            {
                if(j<=c)
                printf(" ");
                else if(j==c+1)
                printf("%d",num2);
                else if(j>c+1 && j<=c+1+d)
                printf(" ");
                else if(j==c+1+d+1)
                printf("%d",num2);
            }
        }
        if(i<=n)
        {   a++;
            b-=2;
            num++;
        }
        else 
        {
            c--;
            d+=2;
            num2--;
        }
        printf("\n");
    }
    return 0;
}