//WAP to find the sum of two fractions.
#include<stdio.h>
struct fraction
{
int a,b,c,d;
};
int lcm(struct fraction x,struct fraction z)
{
int max=0;
if (x.a>z.d)
{
max=x.b;
}
else
{
max=z.d;
}
while(1)
{
if(max%x.b == 0 && max%z.d == 0)
{
break;
}
max++;
}
return max;
}
int num1(struct fraction w,struct fraction x,struct fraction z)
{
w.a *= lcm(x,z)/x.b;
}
int num2(struct fraction y,struct fraction x,struct fraction z)
{
y.c *=lcm(x,z)/z.d;
}
int output(struct fraction w,struct fraction x,struct fraction y,struct fraction z)
{
return num1(w,x,z)+num2(y,x,z); 
}  int main()
{
struct fraction w,x,y,z;
printf("enter the value for the first fraction:\n");
printf("numerator : ");
scanf("%d",&w.a);
printf("denominator: ");
scanf("%d",&x.b);
printf("enter the value for second fraction:\n");
printf("numerator : ");
scanf("%d",&y.c);
printf("denominator: ");
scanf("%d",&z.d);
printf("sum of %d/%d and %d/%d is:\n %d/%d",w.a,x.b,y.c,z.d,output(w,x,y,z),lcm(x,z));
return 0;
}
