#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
float sum=0,fact=1;
printf("enter n(1<=n<=8):");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*(float)i;
sum=(i/fact)+sum;
}
printf("%f",sum);
getch();
return 0;
}
