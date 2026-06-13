// 3. Write a C program to print all odd numbers between 1 to 100. – using while loop
#include<stdio.h>
int main()
{
    int x=1;
    while(x<=100)
    {
        if(x%2==0)
        {
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}