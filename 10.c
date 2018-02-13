#include<stdio.h>
int main(void)
{
  int n=0,c=0,c2=0,res=0,nc=0, x=0;
  for(c=1;c<=100;c++)
    {
      for(c2=1;c2<=c;c2++)
	{
	  res=c%c2;
	  if(res==0)
	    {
	      nc=nc+1;
	    }
	}
      if(nc==2)
	{
	  
	  x+=c;
	  
	}
      nc=0;
    }
  printf("%d\n", x);
}
