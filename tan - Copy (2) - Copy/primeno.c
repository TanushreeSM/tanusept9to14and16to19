#include<stdio.h>
int main()
{
int n,i,m;
printf("Enter the number to check prime:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
m=1;
break;
}
}
if(m==1)
{
printf("number is not prime");
}
else
{
printf("Number is prime");
}
getch();
return 0;
}
