#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
  if(a>c)
  {
  printf("\n%d is larger",a);
  }
  else
  {
  printf("\n%d is larger",c);
  }
}
else
{
  if(b>c)
  {
  printf("\n%d is larger",b);
  }
  else
  {
  printf("\n%d is larger",c);
  }
}
return 0;
}
  
