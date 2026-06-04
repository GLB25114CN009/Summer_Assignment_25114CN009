//write a program to print sum of N natural numbers
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;

    }
    printf("the sum is:\n %d",sum);
    return 0;
}