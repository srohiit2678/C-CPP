#include<stdio.h>
void main()
{
    int a[2][2],i,j,no;
    printf("Enter the elemants of matrix a\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
