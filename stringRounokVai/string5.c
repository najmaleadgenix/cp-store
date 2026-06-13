#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",&str);
    char str1[1000];
    int length=strlen(str);
    for(int i=0; i<length; i++)
    {
        str1[i]=str[i];
    }
    for(int i=0,j=length-1; i<=j; i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    
    
    int count=1;
    for(int i=0; i<length; i++)
    {
        if(str1[i]!=str[i])
        {
            count=0;
            break;
        }
    }
    if(count==1)
    {
        printf("Palindrome");
    }
    else 
    printf("Not palindrome");

    return 0;
}