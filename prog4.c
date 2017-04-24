#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char c;
printf("enter the character ");
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
{
printf("alphabet");
}
else
{
printf("not alphabet");
}
getch();
}
