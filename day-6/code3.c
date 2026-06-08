// write a program to count set bits in a number
#include<stdio.h>
int set(int num)
{
    int count=0;
    while(num)
    {
        count+=num&1;
        num>>=1;
    }
    return count;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int result=set(num);
    printf("set bits in %d is %d\n",num,result);
}

