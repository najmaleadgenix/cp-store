#include<stdio.h>
int main()
{
  float phy,che,bio,math,cmpt;
  printf("Enter physics mark:");
  scanf("%f",&phy);
  printf("\nEnter chemistry mark:");
  scanf("%f",&che);
  printf("\nEnter biology mark:");
  scanf("%f",&bio);
  printf("\nEnter math mark:");
  scanf("%f",&math);
  printf("\nEnter computer mark:");
  scanf("%f",&cmpt);
    // for phy
  if(phy>=90)
  {
    printf("\nPercentage =%.2f%% : Grade A",phy);
  }
  else if(phy>=80)
  {
    printf("\nPercentage =%.2f%% : Grade B",phy);
  }
  else if(phy>=70)
  {
    printf("\nPercentage =%.2f%% : Grade C",phy);
  }
  else if(phy>=60)
  {
    printf("\nPercentage =%.2f%% : Grade D",phy);
  }
  else if(phy>=40)
  {
    printf("\nPercentage =%.2f%% : Grade E",phy);
  }
  else if(phy<40)
  {
    printf("\nPercentage =%.2f%% : Grade F",phy);
  }
    // for che
  if(che>=90)
  {
    printf("\nPercentage =%.2f%% : Grade A",che);
  }
  else if(che>=80)
  {
    printf("\nPercentage =%.2f%% : Grade B",che);
  }
  else if(che>=70)
  {
    printf("\nPercentage =%.2f%% : Grade C",che);
  }
  else if(che>=60)
  {
    printf("\nPercentage =%.2f%% : Grade D",che);
  }
  else if(che>=40)
  {
    printf("\nPercentage =%.2f%% : Grade E",che);
  }
  else if(che<40)
  {
    printf("\nPercentage =%.2f%% : Grade F",che);
  }
    // for bio
  if(bio>=90)
  {
    printf("\nPercentage =%.2f%% : Grade A",bio);
  }
  else if(bio>=80)
  {
    printf("\nPercentage =%.2f%% : Grade B",bio);
  }
  else if(bio>=70)
  {
    printf("\nPercentage =%.2f%% : Grade C",bio);
  }
  else if(bio>=60)
  {
    printf("\nPercentage =%.2f%% : Grade D",bio);
  }
  else if(bio>=40)
  {
    printf("\nPercentage =%.2f%% : Grade E",bio);
  }
  else if(bio<40)
  {
    printf("\nPercentage =%.2f%% : Grade F",bio);
  }
  // for math
  if(math>=90)
  {
    printf("\nPercentage =%.2f%% : Grade A",math);
  }
  else if(math>=80)
  {
    printf("\nPercentage =%.2f%% : Grade B",math);
  }
  else if(math>=70)
  {
    printf("\nPercentage =%.2f%% : Grade C",math);
  }
  else if(math>=60)
  {
    printf("\nPercentage =%.2f%% : Grade D",math);
  }
  else if(math>=40)
  {
    printf("\nPercentage =%.2f%% : Grade E",math);
  }
  else if(math<40)
  {
    printf("\nPercentage =%.2f%% : Grade F",math);
  }
  // for cmpt
  if(cmpt>=90)
  {
    printf("\nPercentage =%.2f%% : Grade A",cmpt);
  }
  else if(cmpt>=80)
  {
    printf("\nPercentage =%.2f%% : Grade B",cmpt);
  }
  else if(cmpt>=70)
  {
    printf("\nPercentage =%.2f%% : Grade C",cmpt);
  }
  else if(cmpt>=60)
  {
    printf("\nPercentage =%.2f%% : Grade D",cmpt);
  }
  else if(cmpt>=40)
  {
    printf("\nPercentage =%.2f%% : Grade E",cmpt);
  }
  else if(cmpt<40)
  {
    printf("\nPercentage =%.2f%% : Grade F",cmpt);
  }

    return 0;
}