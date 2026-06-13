// n=5

//            1
//          1   1
//        1   2   1
//      1   3   3   1
//    1   4   6   4   1



// copied from chatgpt -> just unable to grasp the formula's concept



#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int add;
    for(int i=0; i<n; i++)
    {
        for(int space=0; space<n-i-1; space++)
        {
            printf("  ");
        }
        for(int j=0; j<=i; j++)
        {
            
            if(i==0 || j==0)
            {
                add=1;
            }
            else
            {
                add=add*(i-j+1) /j;
            }
            
            printf("%4d",add);
        }
        printf("\n");
    }
    return 0;
}