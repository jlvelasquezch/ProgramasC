#include<stdio.h>
int main(void)
{
  int x, y;
  while(x<1000)
    {
      if(x%3==0 || x%5==0)
	{
	  y+=x;
	}
      x++;
    }
  printf("%d \n", y);
  return 0;
}
