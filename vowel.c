#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
{
printf("\n%c is a vowel",ch);
}
else
{
printf("\n%c is not a vowel",ch);
}
return 0;  
}
