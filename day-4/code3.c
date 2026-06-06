//write a program tpo check armsrong number
#include<stdio.h>
int main()
{
    int n,n1,r,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(n1==sum)
    {
    printf("%d is armstrong\n",n1);
    }
    else{
        printf("5%d is not armstrong");
    }
    
    return 0;
}