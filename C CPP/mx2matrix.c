#include<stdio.h>
void main()
{
    int i,j,k,a[2][2],b[2][2],c[2][2],sum=0;
    printf("enter the elements of a matrix.\n");
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
    printf("muntipale of a and b matrix.\n");
     for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
           for(k=0;k<=1;k++)
           {
               sum=sum+a[i][j]*b[i][j];
           }
           c[i][j]=sum;
           sum=0;
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
