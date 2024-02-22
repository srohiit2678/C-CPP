#include<stdio.h>
void main()
{
    int count=0,i,j,a[2][2];
    printf("Enter the elements of a matrix\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
         if(a[i][j]==0)
         {
           count++;
         }
        }
    }
    if(count>(i*j)/2)
    {
        printf("sparse matrix\n");
    }
    else
    {
        printf("not a sparse matrix.\n");
    }
}
