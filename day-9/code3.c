//write a program to print repeated character pattern
/*
A
BB
CCC
DDDD
EEEEE
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
            printf("%c",'A'+i-1);
        }
        printf("\n");
    }
    return 0;
}