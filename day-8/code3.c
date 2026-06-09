//write a program to print character triangle
/*
A
AB
ABC
ABCD
ABCDE
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
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
        return 0;
    
}