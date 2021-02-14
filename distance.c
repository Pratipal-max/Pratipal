//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
float a;
printf("enter the co ordinates: ");
scanf("%f",&a);
}
float calc(float x1,float y1,float x2,float y2)
{
float d;
d=sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
return d;
}
float display(float d)
{
printf("distance between two points :- %f",d);
}
void main()
{
float x1,x2,y1,y2,result,d;
x1=input();
y1=input();
x2=input();
y2=input();
d=calc(x1,y1,x2,y2);
result=display(d);
}
