#include<stdio.h>
void main()
{
char a;
scanf("%c",&a);
if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
{
printf("\n%c is a vowel",a);
}
else
{
printf("\n%c is not a vowel",a);
}
}
