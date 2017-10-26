#include<stdio.h>
int main()
{
int a,b,n,flag=0;
scanf("%d%d%d",&a,&b,&c);
while(a<b)
{
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
    flag=1;
    break;
    }
  }
}  
if(flag==0)
{
printf("\n%d is a prime number");
}
else
{
printf("\n%d is not a prime number");
}
return 0;
}
