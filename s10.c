#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int count=0;
clrscr();
scanf("%d",&n);
while(n!=0)
{
n/=10;
count++;
}
printf("%d",count);
getch();
}
