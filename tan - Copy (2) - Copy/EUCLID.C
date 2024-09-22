#include<stdio.h>
int findgcd(int,int );
int main()
{
int a,b,gcd;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
gcd=findgcd(a,b);
printf("gcd is %d",gcd);
return 0;
}
int findgcd(int a,int b)
{
if(a==0)
return b;
  findgcd(b%a,a);
}
