#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",&str);
    int length=strlen(str);
    for(int i=0,j=length-1; i<=j; i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
    return 0;
}