//write a program to convert binary to decimal
#include<stdio.h>
int main()
{
    long n;
    int s=0,i=1;
    printf("\nbinary=");
    scanf("%ld",&n);
    while(n)
    {
        s+=(n%10)*i;
        i*=2;
        n/=10;
    }
    printf("\ndecimal =%d",s);
    return 0;
}
