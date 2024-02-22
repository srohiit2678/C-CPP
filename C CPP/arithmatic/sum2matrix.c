#include<stdio.h>
void main()
{
    int i,j,a[2][2],b[2][2],c[2][2];
    printf("Enter the elements of a.\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("matrix of a.\n");
     for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of b.\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix of b.\n");
     for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("sum of matrix a and b.\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
