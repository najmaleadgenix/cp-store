#include<stdio.h>
int main()
{
  char c;
  scanf("%c",&c);
  if(c>='a' && c<='z')
  {
    printf("Alphabet");
  }
  else if(c>='A' && c<='Z')
  {
    printf("Alphabet");
  }
  else 
  printf("NOT Alphabet");

    return 0;
}