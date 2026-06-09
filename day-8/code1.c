// write a program to print half pyramid pattern
/*
*
**
***
****
*****
*/

#include<stdio.h>
int main()
{
    int m,i,j;
    printf("enter number of rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}