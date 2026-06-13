#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    long long a[n][m];
    long long b[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%lld",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%lld",&b[i][j]);
        }
    }
    long long c[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%lld ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}