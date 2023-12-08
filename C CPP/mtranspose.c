#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],i,j;
    printf("Enter the elements of a\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }

    printf("matrix of a\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("transpose of a matrix\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }



}
