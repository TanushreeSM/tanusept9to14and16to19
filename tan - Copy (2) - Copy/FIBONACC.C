#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,c,i;
clrscr();
printf("enter n:");
scanf("%d",&n);
printf("%d  %d ",a,b);
for(i=3;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d ",c);
}
getch();
}