#include<stdio.h>
int main()
{
int n,i=2,flag=0;
scanf("%d",&n);
while(i<=n/2)
{
  if(n%2==0)
  {
  flag=1;
  }
}
if(flag==0)
{
printf("\n%d is a prime number",n);
}
else
{
printf("\n%d is not a palindrome");
}
return 0;
}

  
  
  
