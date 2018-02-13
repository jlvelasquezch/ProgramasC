#include<stdio.h>
int main(void)
{
  int x, y, c, n=100;
  x=((n)*(n+1)*((2*n)+1))/6;
  c=((n)*(n+1))/2;
  int w;
  w = x-(c*c);
  printf("%d\n", w);
  return 0;
}
    
  
