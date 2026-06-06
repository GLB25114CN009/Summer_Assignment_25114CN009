//write a program to find nth term of fibonacci series
#include<stdio.h>
int fibonacci(int input)
{
    if(input==1)
    {
    return 0;
}
else if(input==2)
{
    return 1;
}
else if(input==3)
{
    return 1;
}
else
{
    return fibonacci(input-1)+fibonacci(input-2);
}
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("%d",fibonacci(num));
}