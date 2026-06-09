//write a program to print number triangle
/*
1
12
123
1234
12345
123456*/


#include <stdio.h>
int main()
{
    int m,i,j;
    printf("enter number of rows:");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        
            {
             printf("%d",j);
            }
        printf("\n");
    }
    
    }