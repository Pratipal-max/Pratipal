//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
#include<math.h>
float declare()
{
float h,b,d;
printf("enter three inputs : ");
scanf("%f%f%f",&h,&b,&d);
}
float calc(float h,float d,float b)
{
float voltromboloid;
voltromboloid=(1.0)/(3.0)*((h*d*b)+(d/b));
}
float display(float voltromboloid)
{
printf("voltromboloid= %f", voltromboloid);
}
void main()
{
float h,b,d,vol,output;
declare();
vol=calc(h,b,d);
output=display(vol);
}
