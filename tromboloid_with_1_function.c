//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
#include<math.h>
void main()
{
float h,d,b,voltromboloid;
printf("enter 3 num");
scanf("%f%f%f",&h,&d,&b);
voltromboloid=(1.0)/(3.0)*((h*d*b)+(d/b));
printf("voltromboloid = %f",voltromboloid);
}
