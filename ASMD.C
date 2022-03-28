#include<stdio.h>
#include<conio.h>
 int add(int a,int b)
{
int c;
printf("Enter the two number:");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
int sub(int a,int b)
{
int c;
printf("Enter the two number:");
scanf("%d%d",&a,&b);
c=a-b;
return c;
}
int mul(int a,int b)
{
int c;
printf("Enter the two number:");
scanf("%d%d",&a,&b);
c=a*b;
return c;
}
int div(int a,int b)
{
int c;
printf("Enter the two number:");
scanf("%d%d",&a,&b);
c=a/b;
return c;
}
void main()
{
int x,y,res;
clrscr();
res=add(x,y);
printf(" Addition of two numbers %d\n",res);
res=sub(x,y);
printf(" Subtraction of two numbers %d\n",res);
res=mul(x,y);
printf(" Multiplication of two numbers %d\n",res);
res=div(x,y);
printf(" Divition of two numbers %d",res);
getch();
}