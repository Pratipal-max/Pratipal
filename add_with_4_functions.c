//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int addtwono()
{
int a,b,sum;
printf("enter two numbers : ");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum= %d",sum);
}
void main()
{
addtwono();
return 0;
}
