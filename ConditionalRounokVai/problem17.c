#include <stdio.h>
int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            printf("Valid triangle\nEquilateral");
        }
        else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
        {
            printf("Valid triangle\nIsosceles");
        }
        else
            printf("Valid triangle\nScalene");
    }
    else
        printf("Is not valid triangle");
    return 0;
}