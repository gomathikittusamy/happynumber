#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,t,sum,r,s;
clrscr();
printf("enter the number");
scanf("%d",&n);
do
{
sum=0;
while(n>0)
{
r=n%10;
n=n/10;
sum=sum+(r*r);
}
n=sum;
}
while(!(n>=0&&n<=9));
if(n==1)
printf("happy number");
else
printf("not a happy number");
getch();
}
