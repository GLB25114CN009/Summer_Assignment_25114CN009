//write a program to print reverse star pattern
/*
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter number of rows:");
    scanf("%d",&m);
    printf("enter number of columns:");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}