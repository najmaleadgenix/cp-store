/*       4 4 4 4 4 4 4  
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4   
*/

// It's not done yet!! 



#include<stdio.h>
int main(){


   int n=4; // value
   int row=2*n-1,counter=0;
   for(int i=1; i<=row; i++)
   {
    int value=n;
    for(int j=1; j<=row; j++)
    {
        
       if(i==1 || i==row || j==1 || j==row)
        {
            printf("%2d",n);
        }
        else
        {
            value--;
            printf("%2d",value);
             
        }
    }
    printf("\n");
   }

    return 0;
}
