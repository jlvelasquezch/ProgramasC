#include<stdio.h>
int main(void)
{
  int x = 1, y = 1, z = 1, w = 0;
  
  while (z <= 4000000)
    {
      if (z % 2 == 0)
	{	
	  w += z;
	}
      z = x + y;
      x = y;
      y = z;
      
    }
  printf("\nSum: %d\n", w);
  return 0;
}



  
