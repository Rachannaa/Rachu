#include<stdio.h>
int main()
{
int n,orint,rem,revint=0;
scanf("%d",&n);
orint=n;
while(n!=0)
{
rem=n%10;
revint=revint*10+rem;
n/=10;
}
if(revint==orint)
{
printf("\n%d is a palindrome",orint);
}
else
{
printf("\n%d is not a palindrome",orint);
}
return 0;
}
