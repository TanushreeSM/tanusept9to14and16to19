#include<stdio.h>
#include<conio.h>
int main()
{
int n,row,spc,count,t=1;
printf("Enter number of rows you want:");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
for(count=1;count<=n-row;count++)
{
printf("  ");
}
for(count=1;count<=row;count++)
{
printf("%d   ",t++);
}
printf("\n");
}
return 0;
}
