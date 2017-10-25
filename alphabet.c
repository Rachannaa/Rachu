#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
printf("\n%c is an alphabet",ch);
}
else
{
printf("\n%c is not an alphabet",ch);
}
return 0;
}
