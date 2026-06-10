//write a program to print hollow square pattern
/*
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
int main()
{
    int m,i,j;
    printf("enter the height:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 || i==m-1 || j==0 || j==m-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}