//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include <math.h>

struct points
{
  int x;
  int y;
};

float dist(int x1,int y1,int x2,int y2)
{
  float d;
  d =  sqrt((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
  return d;
}
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
void print(float ans)
{
  printf(" the distance between the two points is: %f",ans);

}
int main()
{
  struct points first,second;
  printf("enter co-ordinates of first point: ");
  first.x = input();
  first.y = input();

  printf("enter co-ordinates of second point: ");
  second.x = input();
  second.y = input();
  float ans = dist(first.x,first.y,second.x,second.y);
  print(ans);

}
