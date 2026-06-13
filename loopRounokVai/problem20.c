// 20.Write a C program to print all Armstrong numbers between 1 to n.

/*        
    This works perfectly in online compliler

    MY POOR VS CODE!!


*/
#include <stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    { 
        int temp=i;
    int temp2=i;

    int count_digit=0;

    while(temp!=0)
    {
        temp/=10;
        count_digit++;
    }
    temp=i;
    
    int sum=0;
    while(temp!=0)
    {
        int rem=temp%10;
        int p=pow(rem,count_digit);
        sum=sum+p;
        temp/=10;
    }
    if(temp2==sum)
    printf("%d\n",sum);
    }

    
    return 0;
}
