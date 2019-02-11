#include<stdio.h>
#include<string.h>
int main
{
char a[10];
int l;
sacnf("%c",a);
l=strlen(a);
a[l/2]='*';
printf("%s",a);
return 0;
}
