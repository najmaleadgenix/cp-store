#include <stdio.h>

int main()
{
     int x;
     scanf("%d", &x);
     int count = 0;
     if (x >= 1000)
     {
          count += x / 1000;
          x = x % 1000;
     }
     if (x >= 500)
     {
          count += x / 500;
          x = x % 500;
     }
     if (x >= 100)
     {
          count += x / 100;
          x = x % 100;
     }
     if (x >= 50)
     {
          count += x / 50;
          x = x % 50;
     }
     if (x >= 20)
     {
          count += x / 20;
          x = x % 20;
     }
     if (x >= 10)
     {
          count += x / 10;
          x = x % 10;
     }
     if (x >= 5)
     {
          count += x / 5;
          x = x % 5;
     }
     if (x >= 2)
     {
          count += x / 2;
          x = x % 2;
     }
     if (x >= 1)
     {
          count += x / 1;
          x = x % 1;
     }
     printf("%d", count);

     return 0;
}
