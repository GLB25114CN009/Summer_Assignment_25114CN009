//write a program to find x^n without pow()
#include<stdio.h>
int main()
{
    int i,x,y,ans=1;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        ans*=x;
    }
    printf("%d to the power of %d=%d",x,y,ans);
    return 0;
}
