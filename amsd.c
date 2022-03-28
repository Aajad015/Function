#include<stdio.h>
//#include<conio.h>
 int add(int a,int b)
{
int c;
 c=a+b;
 return c;
}
 int sub(int a,int b)
{
int c;
 c=a-b;
 return c;
}
 int Mul(int a,int b)
{
int c;
 c=a*b;
 return c;
}
 int div(int a,int b)
{
int c;
 c=a/b;
 return c;
}
void main()
{
    int x,y,res;
    printf("Enter the two Numbers:");
    scanf("%d%d",&x,&y);
    res=add(x,y;
    printf("Addition of two number is %d",res);
   res=sub(x,y);
    printf("suntraction of two number is %d",res);
   res=mul(x,y);
    printf("Multiplication of two number is %d",res);
   res=div(x,y);
    printf("Divition of two number is %d",res);
   return 0;
}