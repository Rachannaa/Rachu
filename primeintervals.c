#include<stdio.h>
int main()
{
int a,b,flag=0;
scanf("%d\n%d",&a,&b);
while(a<b)
{
  for(int i=2;i<=a/2;i++)
  {
    if(a%i==0)
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
