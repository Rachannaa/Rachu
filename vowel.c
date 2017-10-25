#include<stdio.h>
int main(int)
{
char a;
scanf("%c",&a);
if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
{
printf("%c is a vowel",a);
}
else
{
printf("%c is not a vowel",a);
}
return 0;
}
