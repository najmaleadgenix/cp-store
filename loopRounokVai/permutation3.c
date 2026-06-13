#include <stdio.h>

int main() {
    int n=3;
    // scanf("%d", &n);
    int a=1,b=1,c=1;
    while(a<=n)
    {
        b=1;
        while(b<=n)
        {
            c=1;
            while(c<=n)
            {
                if(a!=b && a!=c &&b!=c)
                {   
                    // printf("%d ",a);
                    // if(b!=c)
                    // {
                        printf("%d %d %d ",a,b,c);
                    // }
                    printf("\n");
                }
                c++;

            }
            b++;
        }
        a++;
    }

    return 0;
}