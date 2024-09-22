#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0,rem;
clrscr();
printf("enter a number :");
scanf("%d",&num);
for(;num!=0;num/=10)
{
rem=num%10;
rev=rev*10+rem;
}
printf("Reversed number is:%d\n",rev);
getch();
}