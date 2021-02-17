//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input()
{
    int n;
    printf("enter the value of n: \n");
    scanf("%d",&n);
    return n;
}
int calc(int n)
{
    int temp,add;
    for(int i = 1; i<=n; i++ )
        {
        printf("%d enter the number: ",i);
        scanf("%d",&temp);
        add += temp;
        }
    return add;
}
void display(int sum)
{
    printf("sum of n number: %d ",sum);
}
int main()
{
    int sum,n;
    n = input();
    sum = calc(n);
    display(sum);
    return 0;
}
