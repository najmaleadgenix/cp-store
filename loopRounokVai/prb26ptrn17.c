//n=9

//     *         *
//    ***       ***
//   *****     *****
//  *******   *******
// ********* *********
// *******************
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *




#include<stdio.h>
int main()
{
  int n;
  // only odd number
  scanf("%d",&n);
  int a=1;
  int b=n/2;
  int c=n;
  int d=1;
  int e=(2*n)+1;
  int f=0;
  for(int i=1; i<=((n/2)+1) + ((n/2)+1)*2; i++)
  {
    for(int j=1; j<=(2*n)+1; j++)
    { 
      if(i<=(n/2)+1)
      {  if(j<=b)
        printf(" ");
        else if(j>b && j<=b+a)
        printf("*");
        else if(j>a+b && j<=a+b+c)
        printf(" ");
        else if(j>a+b+c && j<=a+b+c+d)
        printf("*");
      }
      else 
      {
        if(j<=f)
      printf(" ");
      else if( j>f && j<=f+e) 
      printf("*");
      }
    }
    if(i<=(n/2)+1)
    { b--;
     a+=2;
     c-=2;
     d+=2;
    }
    else 
    {
      f++;
    e-=2;
    }
    printf("\n");
  }
 
  return 0;
}