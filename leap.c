#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a%4==0)
{
  if(a%100==0)
  {
     if(a%400==0)
     {
     printf("\n%d is a leap year");
     }
     else
     {
     printf("\n%d is not a leap year");
     }
   }
   else
   {
   printf("\n%d is not a leap year");
   }
}   
else
{
printf("\n%d is not a leap year");
}
}

   
   
  
