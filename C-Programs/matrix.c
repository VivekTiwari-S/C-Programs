#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the number of rows:\n");
    scanf("%d",&x);

    printf("Enter the number of columns:\n");
    scanf("%d",&y);

    int a[x][y],b[x][y],c[x][y],i,j;

    printf("Enter first matrix:\n");
    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nEnter second matrix:\n");
    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

     printf("\nThe first matrix is:\n");
    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",a[i][j]);
        }printf("\n");
    }

     printf("\nThe second matrix is:\n");
    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",b[i][j]);
        }printf("\n");
    }

    printf("\nThe resultant matrix is:\n");
    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}