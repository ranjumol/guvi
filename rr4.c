#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("enter a character :");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("%c is an alphabet",c);
}
else
{
printf("%c not an alphabet",c);
}
getch();
}
