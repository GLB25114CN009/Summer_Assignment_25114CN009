//write a program to print reverse number triangle
/*
12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
    int m,i,j;
    printf("enter number of rows:");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    {
    for(j=1;j<=m+1-i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
    }

    return 0;
}