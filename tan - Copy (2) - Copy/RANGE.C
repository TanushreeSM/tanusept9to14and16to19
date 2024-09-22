#include<stdio.h>
int main()
{
int n,i;
int max,min,num;
int range;
printf("enter the number of elements:");
scanf("%d",&n);
if(n<=0)
{
printf("invalid input! the number of elements must be greater than 0.\n");
return 1;
}
printf("enter number 1:");
scanf("%d",&num);
max=min=num;
for(i=1;i<n;i++)
{
printf("enter number %d:",i+1);
scanf("%d",&num);
if(num>max)
{
max=num;
}
if(num<min)
{
min=num;
}
}
range=max-min;
printf("range=%d\n",range);
return 0;
}
