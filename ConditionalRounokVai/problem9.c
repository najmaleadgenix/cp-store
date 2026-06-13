#include<stdio.h>
int main()
{
    char c;
 scanf("%c",&c);
 if(c>='a' && c<='z')
  {
    printf("lowercase Alphabet");
  }
  else if(c>='A' && c<='Z')
  {
    printf("uppercase Alphabet");
  }
  else 
  printf("None");

    return 0;
}