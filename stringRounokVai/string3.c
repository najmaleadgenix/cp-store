#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    int count1=0;
    int count2=0;
    for(int i=0; i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'||
        s[i]=='A'||s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        {
            count1++;
        }
        else 
        count2++;
    }
    printf("vowel=%d\nconsonent=%d",count1,count2);
    return 0;
}