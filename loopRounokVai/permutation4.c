#include <stdio.h>

int main() {
    int n=4;
    // scanf("%d", &n);
    int a=1,b=1,c=1,d=1;
    while(a<=n)
    {
        b=1;
        while(b<=n)
        {
            c=1;
            while(c<=n)
            {
                d=1;
                while(d<=n)
                {
                    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
                    {   
                    // printf("%d ",a);
                    // if(b!=c && c!=d)
                    // {
                        printf("%d %d %d %d",a,b,c,d);
                    // }
                    printf("\n");
                    }
                    d++;
                }
                c++;

            }
            b++;
        }
        a++;
    }

    return 0;
}