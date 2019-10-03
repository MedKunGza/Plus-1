#include<stdio.h>

int main()
{
  int x,y;
  printf("Input Number 1 = ");
  scanf("%d",&x);
  printf("Input Number 2 = ");
  scanf("%d",&y);
  if(y>8)
  {
    y=y-9,x=x+1;
  }
  else 
  {
    x=x,y=y+1;
  }
  printf("%d%d",x,y);
  return 0;
}
